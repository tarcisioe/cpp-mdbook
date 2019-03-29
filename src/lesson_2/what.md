O que é um `std::vector`?
=========================

```cpp
{{#include what.cpp}}
```

`std::vector` representa em C++ um conceito chamado _vetor_. Um vetor é o que
chamamos de "coleção". Ele serve como um recipiente para vários elementos do
mesmo tipo. O tipo de coleção que um vetor representa é o que chamamos de
"sequência", pois a ordem dos elementos é mantida e importa.

`vector` difere um tanto dos tipos primitivos e do tipo `string` por ser
_parametrizado_, e portanto sua declaração vai ser um pouco diferente.

Um tipo parametrizado, também conhecido como um **template de classe** ("_class
template_") não é realmente um tipo, e sim uma "fábrica de tipos". Ele recebe
parâmetros através da sintaxe  de parênteses angulados (`<>`). O tipo `vector`
recebe até dois parâmetros, mas para a aula de hoje vamos nos preocupar apenas
com o primeiro: o tipo dos elementos do vetor.

Podemos colocar diversos elementos em v com o que chamamos de **lista de
inicialização**, ou "_initializer list_". Isso é uma funcionalidade de C++
moderno (C++11 e adiante), então não se surpreenda em ver código mais complexo
para fazer esta mesma coisa, especialmente em código antigo:

```cpp
{{#include what.cpp:6}}
```

Isso também pode ser feito diretamente ao declarar o vetor:

```cpp
{{#include what.cpp:8}}
```

Sinta-se à vontade para alterar a linha acima.  Insira elementos, remova
elementos, altere elementos. Sempre recompile e veja o resultado. Tente colocar
elementos que não sejam do tipo `int`, como `double`s ou mesmo `std::string`s.

```cpp
{{#include what.cpp:10}}
```
