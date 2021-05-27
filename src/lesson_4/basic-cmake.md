Organização de um projeto simples com CMake
===========================================


O que é o CMake
---------------

CMake é um **gerador de sistemas de build**. Um **sistema de build** é uma
coleção de utilitários que organiza a compilação de um projeto. Alguns exemplos
são:

- Make
- Ninja
- MSBuild (parte do Microsoft Visual Studio)

O CMake é uma ferramenta capaz de gerar projetos para diversos sistemas de
build diferentes. Com isso, conseguimos não só organizar nosso projeto como
suportar diversos ambientes diferentes, compiladores diferentes e sistemas
operacionais diferentes.

Um


Um projeto básico com CMake
---------------------------

Seja um programa composto pelos seguintes arquivos:

```
$ tree grading
.
├── functions.cpp
├── functions.h
├── main.cpp
├── student.cpp
└── student.h
```

Você pode baixar estes arquivos aqui: [Exemplo](https://tarcis.io/cpp/lesson_4/example.tar.gz).
