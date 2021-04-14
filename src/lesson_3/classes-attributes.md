Classes - Atributos e construtores
==================================

Atributos
---------

Com vimos anteriormente, ao final da definição de nossa classe temos os
**atributos**, ou **variáveis-membro**, do objeto. Em geral, eles são mantidos
na parte privada da classe, e são acessíveis apenas pelos métodos dos próprios
objetos. Os atributos do objeto são, na maior parte das vezes, o motivo de
criarmos um novo tipo: agrupar informações que compõem um conceito que não é
diretamente representado por tipos primitivos ou outros tipos já disponíveis.

```cpp
{{#include vector2d.h:19:20}}
```

No tipo `Vector2D` temos apenas dois membros, `x_` e `y_`. Os nomes possuem um
underscore no fim para não conflitarem com os nomes dos métodos que dão acesso
(apenas de leitura) para eles. Note também o valor entre `{}` depois de cada
atributo. Este valor será utilizado na inicialização pelo construtor padrão
(explicado em detalhes a seguir). Qualquer construtor de `Vector` que
não tenha outro valor especificado para inicializar `x_` e `y_` utilizará os
valores especificados aqui.

Os atributos de nosso `Vector2D` definem seu estado e são tudo o que realmente
é necessário para ter um objeto desse tipo. De fato, para o compilador, um
`Vector2D` nada mais é do que _dois double que estão sempre em conjunto_.


Construtores
------------

Para um tipo nos ser útil, é necessário que sejamos capazes de criar, ou
**instanciar**, valores que pertençam a ele. Para que possamos fazer a inicialização
dos valores criados corretamente, temos os **construtores**.

Como vimos antes, temos três construtores:

```cpp
{{#include vector2d.h:8:10}}
```

- Um que recebe dois `double`, que irá inicializar os atributos do `Vector2D`.
- Um que recebe zero atributos, conhecido como **construtor padrão**, cuja
  implementação ainda é desconhecida.
- Um que recebe outro `Vector2D` por referência para constante, chamado
  **construtor de cópia**, responsável por inicializar um `Vector2D` igual a
  outro já existente.
