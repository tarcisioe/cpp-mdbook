Parâmetros de função: valores e referências
===========================================

Valores
-------

```cpp
{{#include value.cpp}}
```

Primeiramente, precisamos entender o que são parâmetros passados por **valor**. Veja
a função seguir:

```cpp
{{#include value.cpp:7:23}}
```

Na função acima, o único parâmetro é `n`. Ele é passado por **valor**, o que
significa que quando a função é chamada, ele é inicializado com base no que está
entre parênteses, mas é **uma variável totalmente diferente**. Portanto, alterar
`n` dentro da função não afeta de forma alguma o valor original:

```cpp
{{#include value.cpp:30:33}}
```

O código acima imprimirá `10`, mesmo que `to_n` altere o parâmetro `n` em seu
código. Então, um parâmetro passado por valor dentro da função é uma entidade
_independente_ do parâmetro no ponto da chamada, e passar um parâmetro por
valor, em condições normais, não o altera. Veremos algumas exceções à regra
eventualmente, mas, quando isso ocorrer, será claramente denotado.


Referências
-----------

```cpp
{{#include ref.cpp}}
```

Vejamos agora um exemplo do conceito oposto, um parâmetro recebido por
**referência**:

```cpp
{{#include ref.cpp:7:12}}
```

O parâmetro `ints` é uma referência, o que efetivamente significa que ele **se
refere** ao objeto original. Não há a criação de uma nova entidade. O parâmetro
**é** o mesmo valor do ponto de chamada, e alterações feitas a partir dele
refletirão no valor original.

Veja também a linha

```cpp
{{#include ref.cpp:9}}
```

Aqui, ao declararmos a variável que será usada no `for`, também usamos uma
referência. O mesmo conceito se aplica. se não utilizássemos uma referência
aqui, os valores originais em `ints` não seriam alterados.

Logo, ao executar:

```cpp
{{#include ref.cpp:19:25}}
```

Veremos:

```
0
0
0
0
```

Ou seja, o objeto passado no ponto de chamada foi modificado, o que é
verificado logo na sequência.

Agora experimente com o código acima. Sugestões:

- Primeiro, imprima o conteúdo de `ints` dentro de `zero_all`, após o `for` que
  os modifica.
- Com a alteração anterior, experimente trocar os usos de referências por valores,
  tanto no parâmetro quanto no `for`.
