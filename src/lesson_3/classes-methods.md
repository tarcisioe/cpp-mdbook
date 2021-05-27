Classes - Métodos
=================

Os **métodos**, ou **funções-membro** de `Vector2D` definirão as operações
que podem ser feitas com os objetos do tipo.

Os primeiros métodos que serão definidos servem para podermos acessar os
valores internos do vetor. Não queremos deixar os atributos públicos, por
diversos motivos. O mais comum deles é que não queremos que eles possam ser
alterados por algum código de fora da classe, para que o controle do estado do
objeto fique sujeito apenas aos métodos da classe. Para isso, fazemos o que
chamamos de _accessors_ ou _getters_:

```cpp
{{#include vector2d.h:12:13}}
```

Em C++, é comum _getters_ serem nomeados de acordo com o nome do atributo que
expõem, porém sem quaisquer desambiguadores que não são muito amigáveis para
quem utilizará o objeto (como o `_` colocado nos atributos `x_` e `y_`).

Em ambos os métodos `x()` e `y()`, vemos também um qualificador `const`.

Na sequência, temos operações mais complexas, que envolvem alterar o estado
atual do objeto:

```cpp
{{#include vector2d.h:15:17}}
```


