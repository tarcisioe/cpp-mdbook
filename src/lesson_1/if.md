A construção `if/else if/else`
==============================

Aqui temos um código baseado em uma condição. Temos abaixo uma nota,
representada como um `double`. Baseado no valor dessa nota, o código
imprime uma mensagem relacionada.

```cpp
{{#include if.cpp}}
```

O conteúdo dos parênteses logo após a palavra `if` é chamado _condição_.  A
condição sempre deve ser algo do qual possa ser extraído um _valor verdade_,
também conhecido como _valor booleano_, ou seja, `true` (verdadeiro), ou
`false` (falso).

```cpp
{{#include if.cpp:7}}
```

Nesta linha, `grade < 5.75` irá ser visto como `true`, pois no nosso exemplo
`grade == 5.0`, que é menor do que `5.75`.

> **Nota**: O tipo que contém os valores `true` e `false` em C++ chama-se `bool`.
  Outros tipos, como `int`, podem ser _convertidos implicitamente_ para `bool`
  em alguns casos. No exemplo de `int`, `0` torna-se `false`, enquanto outros
  valores se tornam `true`.

A construção `if` executa o código contido no bloco (entre as chaves `{}`)
quando a condição tem valor `true`. Portanto, sabemos que nesse código o que
executará é a seguinte linha:

```cpp
{{#include if.cpp:8}}
```

> **Nota**: Experimente alterar o valor, recompilar e reexecutar para ver o
  resultado!.

O bloco dado por `else if` funciona de maneira semelhante. A diferença é que ele
funciona de maneira _mutuamente exclusiva_. Ou seja, **mesmo que a condição do
`else if` seja verdadeira**, se o bloco do `if` executou, o bloco do `else if`
não irá executar.

Por fim, o bloco da parte dada por `else` executa se nenhum outro dos blocos
executar. Para que ele execute, é necessário portanto que `grade` seja alterado
para um valor maior do que `8.0`.

A seguir, veremos uma construção semelhante ao `if`, mas para repetir operações:
a construção `while`.


`auto`
------

Você deve ter percebido que a variável `grade` foi declarada utilizando `auto`.
Este, porém, não é o tipo dela: ela é do tipo `double`, que é utilizado para
representar números de ponto-flutuante, (números decimais com número de casas
arbitrário).

O especificador `auto` permite **inferir o tipo de uma variável no ponto de sua
inicialização**. Com ele, não é necessário repetir a informação do tipo de uma
variável: ela é dada pelo tipo do valor utilizado para inicializá-la.

É importante notar que, mesmo declarada com **auto**, uma variável não tem como
mudar de tipo durante a execução do programa, ou seja, `grade` é um double e
pode assumir apenas valores `double` enquanto existir.

Utilizar `auto` frequentemente nos traz duas principais vantagens:
1. Não temos como declarar variáveis sem inicializá-las, pois ao declarar com
   `auto` é necessário inicializar para que o tipo possa ser deduzido.

2. Não há repetição de informação no que escrevemos. Ao escrevermos `double
   grade = 4.0;`, a informação de que a variável é um `double` existe tanto no
   nome `double` como no valor `5.0`, que já é um `double` para a linguagem.
   Logo, não é necessário se repetir. já que o compilador é capaz de inferir
   que, para conter `5.0`, grade necessita ser `double`.
