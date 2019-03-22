O laço `for`
============

Outro caso muito comum em que precisamos executar um código repetidamente é
quando precisamos fazer isso um número específico de vezes, ou uma vez para
cada elemento em uma coleção de valores. Para estes casos, os laços do tipo
`for` são a forma mais direta de escrever o código.

Em C++, temos dois tipos de laço `for`: o `for` normal (clássico), e o
`range-for`, introduzido em C++11. Veremos os dois na sequência.


O `for` clássico
----------------

```cpp
{{#include for.cpp}}
```

O primeiro laço `for` é a versão mais "clássica". Ele é visto em diversas outras
linguagens, como C ou Java. Dentro dos parênteses, temos as seguintes partes:

```cpp
//            1         2        3
//            |         |        |
{{#include for.cpp:9}}
```

1. **Inicialização**: Este campo executa apenas uma vez, antes do laço
   iniciar.
2. **Condição**: O laço executará enquanto esta condição for verdadeira,
   como acontece no `while`.
3. **Passo**: Este código executará ao final do corpo do laço, todas as
   vezes que o corpo também executar.

Qualquer uma dessas partes pode ser vazia. Se a condição for vazia, o
laço roda infinitamente. Com a inicialização e o passo vazio, podemos escrever
um laço `while` na forma de `for`, assim como o inverso é possível.

O laço for também garante que a variável inicializada na contagem existe apenas
durante o escopo do `for`, e seu nome pode ser reutilizado posteriormnete no
código.

Com isso, conseguimos ir da posição `0` até a posição `size-1` (sequências em
C++ tem 0 como seu primeiro índice), e somar todas as notas, para
posteriormente dividi-las pelo número de notas e obter a média.


O `range-for`
-------------

```cpp
{{#include range_for.cpp}}
```

O segundo laço é o _range-for_. Este `for` precisa de um objeto
sobre o qual ele possa iterar - no nosso caso, um `std::vector`.

```cpp
//         2        1
//         |        |
{{#include range_for.cpp:8}}
```

O `range-for` tem uma estrutura mais rígida. Sempre haverá:

1. Um objeto a ser iterado sobre.
2. Uma variável que irá representar, em cada iteração do laço, o **elemento
   atual** do objeto.

Utilizando o _range-for_ dessa forma conseguimos chegar ao mosmo resultado que
com o `for` clássico.

O mecanismo que permite o funcionamento do `range-for` será introduzido
posteriormente, quando estudarmos _iterators_.
