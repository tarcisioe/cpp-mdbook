Classes - Visão geral
=====================

```cpp
{{#include vector2d.h:4:27}}
```

Nosso primeiro exemplo de classe será um **vetor**. Atenção aqui: não estamos
falando do vetor como uma sequência de elementos: aqui estamos falando de um
vetor bidimensional, como o conceito usado em álgebra linear ou física.

Escolhemos um vetor 2D como exemplo de classe pois ele é mais complexo que um
tipo primitivo, mas mesmo assim possui operações simples para descrevermos.
Ele permitirá explorar tudo que pretendemos explicar sobre classes nesta aula.

Para começarmos, veremos como formar a organização lógica do nosso código,
utilizando **namespaces**. Um namespace nada mais é que uma coleção de entidades
de um programa: funções, tipos, variáveis globais, etc. Já utilizamos diversas
vezes o namespace mais conhecido: `std`, que engloba todos os elementos da
biblioteca padrão, como `vector`, `string` e `cout`, e vimos outros em exemplos
da aula anterior. Criar um namespace é bastante simples:

```cpp
{{#include vector2d.h:4}}
```

Pronto! Tudo o que for declarado aqui dentro faz parte do namespace `math`,
até o `}` final do namespace. Com isso, todo o conteúdo do arquivo a partir
daqui, em código de fora do namespace, deve ser utilizado utilizando o prefixo
`math::`. Veremos também formas de simplificar isso quando necessário mais
adiante.

Agora, vamos à definição de nossa classe. Para criar uma classe utilizamos a
keyword `class`. Uma classe introduz um tipo no programa, ou seja, após a
definição da classe ela pode ser utilizada como um tipo como os que já vimos
antes. Por exemplo, `std::string` é uma classe, apesar de sua definição ser
mais complexa que a classe que mostraremos aqui.

```cpp
{{#include vector2d.h:6}}
```

A partir deste ponto, o tipo `math::Vector` já existe para o nosso programa. Um
tipo, por sua vez, possui uma **interface**. É importante, porém, que cuidemos
com essa palavra: interface é um termo com diversos significados quando falamos
de programação. O que queremos dizer aqui é o seguinte: a interface de um tipo
define como como outras partes do progarama o utilizam. Como estamos
introduzindo no programa um tipo completamente novo, somos responsáveis por
definir duas coisas:

- Como ele funciona.
- Como ele é utilizado.

Por termos a responsabilidade de definir estas duas coisas, C++ traz a
possibilidade de separar detalhes explicitamente, com o conceito de `public` e
`private`. Elementos internos do tipo que estamos definindo (chamados
**membros**) podem ser públicos, ou seja, acessíveis para quem utiliza o tipo,
ou privados, ou seja, acessíveis somente dentro da definição interna do tipo. A
isso damos o nome de **visibilidade**. Iniciamos a seção pública da classe com
a seguinte linha:

```cpp
{{#include vector2d.h:7}}
```

Na seção `public` veremos todos os _métodos_ da classe `Vector`. Os métodos de
uma classe são funções, semelhante às que vimos na aula 3, mas diretamente
ligadas aos objetos da classe. Já vimos métodos em objetos da clase
`std::string` e `std::vector`, como `size()`, `empty()` e `push_back()`.

As primeira funções públicas que veremos nessa classe são seus **construtores**.
Os construtores definem como um valor do tipo da classe é inicializado. Nesta
classe temos três construtores:

```cpp
{{#include vector2d.h:8:10}}
```

Os construtores serão explicados na seção seguinte.

Na sequência definiremos métodos que descrevem as operações básicas que podem
ser feitas com um `Vector2D`.

```cpp
{{#include vector2d.h:12:17}}
```

Veremos métodos na seção seguinte a construtores.

Por fim, temos os **atributos** da classe `Vector2D`. Como os atributos definem
o objeto e precisam ser mantidos consistentes pelos métodos, eles não fazem
parte da interface pública de uma classe, e sim são **privados**. Nosso
`Vector2D` possui duas coordenadas num espaço bidimensional, `x` e `y`, que são
`double`s. Para evitar conflito com os métodos, utilizamos os nomes `x_` e `y_`.

```cpp
{{#include vector2d.h:19:21}}
```

Com isso, terminamos a **definição** de nossa classe. Sabemos que a classe está
**definida** pois apesar de não conhecermos ainda a implementação de seus
métodos, sabemos **os tipos dos atributos que a compõem**.

Ainda dentro do namespace `math`, temos algumas funções que operam utilizando
`Vector2D`. Essas funções são funções como as que já vimos na aula anterior,
mas como podemos notar, elas não tem corpo. Veremos mais adiante nesta aula
como implementar as funções em um outro arquivo.

Quando temos apenas o tipo de retorno e a assinatura de uma função, temos uma
**declaração**.  A funções com corpo, damos o nome de **definição**. Toda
definição também é uma declaração, mas o contrrário não é verdade. Esses
conceitos irão gradualmente se demonstrar bastante importantes.

Vamos agora à primeira parte de nossas classes: os atributos e construtores.
