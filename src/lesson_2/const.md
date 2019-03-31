Parâmetros de função: const
===========================


O mecanismo de passagem por valor
---------------------------------

```cpp
{{#include average_squares.cpp::19}}
{{#include average_squares.cpp:35:41}}
{{#include average_squares.cpp:43}}
```

Conforme vimos na seção passada, usamos **referências** se  _pretendemos
alterar o valor enviado como parâmetro_ e **valores** quando não.

Vamos então entender como um parâmetro por valor funciona nesse caso. Vejamos
um exemplo que aproveita o parâmetro passado por valor para computar:

```cpp
{{#include average_squares.cpp:8:15}}
```

Como vimos antes, essa o parâmetro passado a essa função fica intacto após a
chamada. Para que isso seja possível, o que está ocorrendo é que o parâmetro é
**inicializado por cópia**.

Salvo em exceções que veremos adiante, tomar parâmetros por valor implica em
uma cópia, que pode ser uma operação cara em um tipo que seja grande, ou possua
uma semântica complexa.

Sabendo disso, podemos ficar tranquilos em tomar por valor parâmetros de tipos
simples e pequenos, como `int` ou `double`. Mas ao lidar com parâmetros que
podem ter uma cópia cara, se tudo que precisamos é fazer **leitura** do
parâmetro, gostaríamos então de evitar essa cópia.


O que sabemos até agora
-----------------------

```cpp
{{#include palindrome.cpp::21}}
{{#include palindrome.cpp:40:48}}
{{#include palindrome.cpp:50}}
```

Sabemos que receber o parâmetro por valor, no caso em que vimos,  implica em
uma cópia para não alterar o original. Ora, na seção anterior vimos que podemos
passar parâmetros por referência. Referências efetivamente representam um acesso
direto ao objeto original. Portanto, ao usá-las, evitamos uma cópia.

Em C++, porém, existe o conceito de **constantes**. Em contraste com as
**variáveis** que vimos até agora, constantes são valores nomeados que **nunca
mudam**. Sabendo que esses valores nunca mudam, é possível tanto para o
programador quanto para o compilador tomar decisões que não seriam possíveis
sem essa certeza.

No nosso exemplo acima, temos uma constante, definida com o qualificador `const`:

```cpp
{{#include palindrome.cpp:46}}
```

Infelizmente, em nossa função, baseado apenas na **assinatura** da função, não
há nenhuma maneira de garantir que o parâmetro não será modificado. E como
veremos quando fizermos programas com mais de um arquivo, o compilador nem
sempre tem acesso ao **corpo** da função. Portanto, ao tentar compilar,
recebemos um erro:

```
src/lesson_2/palindrome.cpp: In function ‘int main()’:
src/lesson_2/palindrome.cpp:48:69: error: binding reference of type ‘std::__cxx11::string&’ {aka ‘std::__cxx11::basic_string<char>&’} to ‘const std::__cxx11::basic_string<char>’ discards qualifiers
     std::cout << word << " is a palindrome: " << ref::is_palindrome(word) << '\n';
                                                                     ^~~~
src/lesson_2/palindrome.cpp:7:6: note:   initializing argument 1 of ‘bool ref::is_palindrome(std::__cxx11::string&)’
 bool is_palindrome(std::string& s)
      ^~~~~~~~~~~~~
```

> **Assinatura** é o nome que se dá ao nome de uma função em conjunto com os
  tipos aceitos como seus parâmetros. **Corpo** é como chamamos o código que
  define o que a função faz (o que está dentro das chaves `{ ... }`).

Sabendo disso, portanto, precisamos de uma forma de garantir ao compilador que
nossa função não altera seu parâmetro.


O qualificador `const` em referências
-------------------------------------

```cpp
{{#include palindrome.cpp::4}}
{{#include palindrome.cpp:23:39}}
{{#include palindrome.cpp:40:47}}
{{#include palindrome.cpp:49:}}
```

Para podermos lidar com o problema que surgiu, então, podemos utilizar
**referências para constantes**. Estas referências permitem utilizar o
benefício de acessar diretamente o valor original enquanto garantimos não
alterar o parâmetro que foi passado à função. Conseguimos agora compilar e
executar:

```
arara is a palindrome: 1
```

Evitando a cópia no primeiro exemplo
------------------------------------

```cpp
{{#include average_squares.cpp:1}}
{{#include average_squares.cpp:3}}
{{#include average_squares.cpp:4:5}}
{{#include average_squares.cpp:20:34}}
{{#include average_squares.cpp:35:40}}
{{#include average_squares.cpp:42:43}}
```

No primeiro exemplo, porém, não basta adicionar `const` e `&`. Veja o que
ocorre se tentarmos:

```cpp
{{#include average_squares.cpp:46:}}
```

```
src/lesson_2/average_squares.cpp:48:8: error: redefinition of ‘double const_ref::average_squares(const std::vector<double>&)’
 double average_squares(const std::vector<double>& values)
        ^~~~~~~~~~~~~~~
src/lesson_2/average_squares.cpp:22:8: note: ‘double const_ref::average_squares(const std::vector<double>&)’ previously defined here
 double average_squares(const std::vector<double>& values)
        ^~~~~~~~~~~~~~~
src/lesson_2/average_squares.cpp: In function ‘double const_ref::average_squares(const std::vector<double>&)’:
src/lesson_2/average_squares.cpp:51:14: error: assignment of read-only reference ‘i’
         i *= i;
              ^
```

Porém, o uso do parâmetro original para computar não é realmente necessário.
Podemos acumular os valores um a um em uma variável local e escrever o código
da seguinte maneira:

```cpp
{{#include average_squares.cpp:20:33}}
```

E está feito: conseguimos garantir que não ocorre uma cópia, ao mesmo tempo em
que suportamos computar sobre constantes.
