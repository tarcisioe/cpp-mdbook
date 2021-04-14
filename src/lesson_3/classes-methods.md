Classes - Métodos
=================

Os **métodos**, ou **funções-membro** de `Vector2D` definirão as operações
que podem ser feitas com os objetos do tipo.

Os primeiros métodos que serão definidos servem para podermos acessar os
valores internos do vetor. Não queremos deixar os membros públicos, por
diversos motivos, o mais simples e direto deles é que não queremos que eles
possam ser alterados diretamente por algum código de fora da classe. Para isso,
fazemos o que chamamos de **accessors** ou **getters**.

```cpp
{{#include vector2d.h:12:13}}
```

Na sequência, temos operações mais complexas, que envolvem alterar o estado
atual do objeto:

```cpp
{{#include vector2d.h:15:17}}
```
