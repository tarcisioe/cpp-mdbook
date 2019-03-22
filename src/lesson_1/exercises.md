Exercícios
==========


1. Escreva um laço que passe **por todos** os números de 1 a 100,
   mas imprima apenas os pares.
    - Dica: o operador `%` pode ser utilizado para obter o resto da divisão.

2. Faça um laço baseado no da questão anterior. Neste laço, para cada número,
   imprima:
    * `fizz` se o número for divisível por 3
    * `buzz` se o número for divisível por 5
    * `fizzbuzz` se o número for divisível por ambos
    * O próprio número, em todos os outros casos.
    * Lembre de **não** imprimir o número nos três primeiros casos.

3. Utilizando algum dos tipos de laço vistos nesta aula, **escreva funções** que
   imprimam os valores da sequência de Fibonacci, das seguintes formas:
    * Dado um `n`, até o `n`-ésimo elemento da sequência.
    * Dado um `x`, até o último elemento da sequência que seja menor ou igual
      a `x`

    > **Dica**: Considere que o `n` do primeiro elemento é 0, e que os
     dois primeiros elementos (`n` 0 e 1) tem valor 1.

    Utilize o seguinte `main`:

    ```cpp
    // implemente sua função aqui

    int main()
    {
        fib_up_to(100);
        fib_less_than(1024);
    }
    ```

4. Utilizando algum dos tipos de laço vistos em aula, **escreva uma função**
   que, dada uma std::string qualquer, **retorne** `palindrome` se ela for
   um palíndromo e `not a palindrome` se ela não for um palíndromo.

    > **Palíndromo**: Uma string que é igual a si mesma se lida de trás para
      frente, como `arara`.

    * Para acessar cada caractere da string, pode se usar `s[i]` para uma
      `string s` e uma posição `i`, ou pode-se usar o _range-based_ `for` na
      string.
    * Lembre-se que as posições na `string` iniciam-se em 0.

    Utilize o seguinte `main`:

    ```cpp
    #include <iostream>
    #include <string>

    // implemente sua função aqui

    int main()
    {
        using namespace std::string_literals;

        std::cout << "arara is " << check_palindrome("arara");
        std::cout << "banana is " << check_palindrome("banana");
    }
    ```
