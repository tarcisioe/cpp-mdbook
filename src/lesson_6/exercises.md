Exercícios
==========


A partir do exercício da aula 5, implemente as seguintes modificações:

- Crie uma classe-base `Course` com um método virtual `average'. Esta será
a interface para o cálculo de nota de mais de uma disciplina.
- Crie duas classes que herdam de `Course` implementando `average` de formas
  diferentes:
    - Uma chamada `DataStructures`, cuja média é a média entre três trabalhos
      com peso 0.8 e uma prova com peso 0.2.
    - Uma chamada `Calculus`, cuja média é a média entre três provas.
- Em lugar de cada `Student` possuir três notas para calcular sua média, ele
  deve ter um `std::vector<unique_ptr<Course>>` que guarda todas as suas disciplinas
  com suas respectivas notas, e um método `averages` que retorna um vetor de `double`
  com todas as suas médias.
- Altere o formato de entrada para que seja:

```
<número de entradas>
<nome>
<ano de entrada no curso>
<número de disciplinas>
<nome da primeira disciplina>
<nota1>
<nota2>
<...>
<nome da segunda disciplina>
<nota1>
<nota2>
<...>
```

Exemplo:

```
3
João
2014
1
Data Structures
4.0
7.5
6.0
10.0
Afonso
2018
2
Calculus
7.0
9.0
9.0
Data Structures
10.0
10.0
9.0
8.0
Maria
2012
2
Data Structures
9.0
9.0
10.0
10.0
Calculus
6.0
9.0
10.0

- Alterações no `main` dessa vez ficam como parte do exercício.
```
