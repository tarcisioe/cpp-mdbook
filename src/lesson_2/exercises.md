Exercícios
==========

1. Escreva uma função que receba uma string e verifique o balanceamento de três
   tipos de parênteses: `()`, `[]` e `{}`. Parênteses estão balanceados quando:
    1. Da esquerda pra direita, todo fechamento é precedido por uma abertura:
       todo `)` tem um `(` anterior correspondente.
    2. Todo parênteses aberto é fechado: `()` está balanceado, `(()` não.
    3. Todo fechamento de parênteses fecha o tipo correspondente à última
       abertura: `([])` é ok, `([)]` não.

    Utilize um `std::vector` em sua implementação.

    Utilize o seguinte `main`:

    ```cpp
    int main()
    {
        using namespace std::string_literals;

        auto cases = std::vector<std::string>{
            "int main(int argv, char** argv) { std::cout << argv[0] << '\n'; }"s,
            "([[]]{[]}{()})"s,
            ""s,
            ")"s,
            "([)()(])({}{)(})"s,
            "[[](){](()"s,
        };

        for (auto c: cases) {
            std::cout << "Case " << c << " is "
                      << (balanced(c) ? "balanced" : "not balanced")
                      << '\n';

        }
    }
    ```

2. Escreva uma função que receba um caractere (`char`) e uma `string` e retorne
   o número de vezes que o caractere aparece na string. **Lembre-se: copiar uma
   string pode ser custoso.** A string não deve ser alterada de forma alguma.

    Utilize o seguinte main:

    ```cpp
    int main()
    {
        using namespace std::string_literals;

        const auto word = "evidentemente"s;
        const auto letter = 'e';
        std::cout << "number of " << letter << " in " << word << ": "
                  << count_occurences(letter, word);
    }
    ```


3. Escreva uma função que troca dois inteiros de lugar.

    Utilize o seguinte main:

    ```cpp
    int main()
    {
        auto i = 2, j = 3;
        swap(i, j);
        std::cout << i << "\n"; // deve imprimir 3
        std::cout << j << "\n"; // deve imprimir 2
    }
    ```

3. Escreva uma função que receba um vetor de inteiros e remova duplicatas
   adjacentes,, ou seja, sequências do mesmo valor.

    Exemplo:

    ```
    {1, 1, 1, 2, 3, 3, 4, 1, 1} -> {1, 2, 3, 4, 1}
    ```

    Retorne o resultado e não altere a entrada.

    Utilize o seguinte main:

    ```cpp
    int main()
    {
        for (auto i: remove_duplicates({1, 1, 1, 2, 3, 3, 4, 1, 1})) {
            std::cout << i << '\n';
        }
    }
    ```

4. [Desafio] Faça o mesmo exercício que o acima, mas em vez de retornar o
   resultado, altere o vetor de entrada.

    Utilize o seguinte main:

    ```cpp
    int main()
    {
        auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

        remove_duplicates(ints);

        for (auto i: ints) {
            std::cout << i << '\n';
        }
    }
    ```
