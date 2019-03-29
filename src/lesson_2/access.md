Acessando e alterando elementos
===============================

```cpp
{{#include access.cpp}}
```

Acessando elementos
-------------------

Os elementos de um vetor podem ser acessados primariamente pelo operador `[]`:

```cpp
{{#include access.cpp:10}}
```

Perceba que o primeiro elemento é o de índice 0. Isso não deve ser uma novidade
muito grande para quem já conhece outras linguagens de programação, mas pode
causar um pouco de confusão de início. Por causa disso, se um vetor tiver n
elementos, o último tem o índice n-1.  Ou seja, o último elemento de `w` é
`w[3]`, pois `w` possui tamanho 4.

Vetores são **objetos**. Em C++, objetos são todos os valores que não são de
tipos primitivos. Vetores não são os primeiros objetos vistos por nós:
`std::string`s também são objetos.

Uma característica principal de objetos é agruparem diversas informações. Um
vetor, por exemplo, é capaz de informar o seu tamanho, ou seja, de quantos
objetos ele é composto no momento, com a função-membro `size`.

```cpp
{{#include access.cpp:12}}
```

Funções-membro, também chamadas de "métodos", são rotinas de código atreladas
ao objeto. Veremos mais adiante o conceito de função, função-membro e como
criar objetos. Por agora, apenas mantenha esses nomes em um canto da mente :)

Outros métodos interessantes de acesso em `vector` são os seguintes:

`front()`: obtém o primeiro elemento do vetor (o elemento "da frente").

```cpp
{{#include access.cpp:14}}
```

`back()`: obtém o último elemento do vetor (o elemento "de trás").

```cpp
{{#include access.cpp:16}}
```

Outras informações podem ser adquiridas com `std::vector`, por exemplo,
verificar se ele está vazio (ou seja, com 0 elementos) com `empty`:

```cpp
{{#include access.cpp:20}}
```

Note que `empty` retorna um `bool`, e pode ser utilizado em estruturas
condicionais (`if`):

```cpp
{{#include access.cpp:22:24}}
```

Tente inicializar `q` com algum elemento para mudar o comportamento de `empty`.


Alterando elementos
-------------------

```cpp
{{#include changing.cpp}}
```

Da mesma forma que é possível acessar um elemento no vetor com o operador `[]`,
é possível substituir o elemento naquele ponto:

```cpp
{{#include changing.cpp:10:16}}
```

Também é possível adicionar novos elementos ao final do vetor, utilizando
`push_back(...)`:

```cpp
{{#include changing.cpp:18:29}}
```

Da mesma forma, é possível remover o último elemento do vetor, através do
`pop_back`:

```cpp
{{#include changing.cpp:31:39}}
```

Por fim, por `std::vector` ser um tipo parametrizado, é possível criar
vectors de diferentes tipos, como por exemplo, `std::string`:

```cpp
{{#include changing.cpp:41:49}}
```

E isso mantém todas as características de um `vector`, incluindo `size`,
`push_back`, `front`, e demais métodos demonstrados anteriormente.

Note que não é possível inserir um `int` em `strings`. Descomente a
linha abaixo para ver isso, pois ela não compila.

```cpp
{{#include changing.cpp:51}}
```

A tipagem parametrizável de `vector` ocorre durante a compilação. Desta
forma, `std::vector<int>` e `std::vector<std::string>` são tipos
completamente diferentes para o compilador, e erros como o acima são
facilmente evitados.

> **Nota**: Há também operações como remover elementos do meio de um vetor, porém
  estas lidam com conceitos que serão vistos mais adiante (especificamente,
  iterators) e portanto só serão vistas quando tais conceitos estiverem
  devidamente explicados


Cuidado especial - `std::vector<bool>`
--------------------------------------

Um aviso: o tipo `std::vector<bool>` não deve ser utilizado. Entenderemos
melhor o que ocorre com ele que o torna uma má ideia, mas por enquanto é
suficiente saber que, diferentemente de qualquer outro `std::vector`,
`std::vector<bool>`, em uma tentativa de otimização de espaço, não se comporta
exatamente como esperado em algumas operações.

Por sorte, `vector<bool>` não é realmente algo de uso muito corriqueiro.  É
bastante raro aparecer necessidade, e existem soluções melhores, como
`std::bitset`.

As leituras complementares 3 e 4 trazem alguns detalhes sobre este assunto. É
interessante lê-las novamente quando já tivermos visto alguns assuntos mais
complexos, como templates.


