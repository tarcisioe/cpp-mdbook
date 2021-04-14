Exercícios
==========

Represente, através de uma classe, um aluno em uma disciplina, possuindo:

- Nome;
- Ano de entrada no curso;
- Três notas.

O objeto que representa o aluno deve ser rapaz de reportar, no mínimo:

- Há quantos anos está no curso.
- Sua média na disciplina.

Pondere sobre a existência de construtor padrão na classe e justifique
brevemente em um comentário sua decisão de implementá-lo ou não.

Na sequência, faça duas funções (externas à classe) que recebam vetores de
alunos, sendo elas:

- Uma que retorne quem passou na disciplina (considere média 6);
- Uma dizendo quais alunos já jubilaram, considerando:
    - Não existe entrada no 2º semestre - ou seja, todos entram no 1º semestre;
    - O período máximo para realizar o curso é de 7 anos.


Este exercício deve ser entregue como um pacote com cinco arquivos;

```
student.h
student.cpp
functions.h
functions.cpp
main.cpp
```

E deve poder ser compilado com a seguinte linha:

```
g++ -std=c++17 student.cpp functions.cpp main.cpp
```

Utilize o seguinte `main.cpp`

```
#include <iostream>
#include <string>
#include <vector>

#include "student.h"
#include "functions.h"

int main()
{
    using std::string_literals;
    using school::Student;

    // TODO: initialize a vector called `students` here

    for (auto s: school::approved(students)) {
        std::cout << s.name()
                  << " is approved by grade with average "
                  << s.average() << ".\n";
    }

    for (auto s: school::dismissed_by_time(students, 2019)) {
        std::cout << s.name()
                  << " was dismissed for being in the course for too long: "
                  << s.years_enrolled(2019) << " years.\n";
    }
}
```
