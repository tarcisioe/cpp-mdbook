Exercícios
==========

Utilizando o código desenvolvido no exercício da aula 3, adicione a funcionalidade
de ler as informações dos alunos a partir da entrada padrão, ou de um arquivo.

Se você ainda não fez o exercício da aula 3, baixe
[essa versão](https://tarcis.io/example-project.tar.gz).

A entrada deve estar no seguinte formato:

```
<número de entradas>
<nome>
<ano de entrada no curso>
<nota1>
<nota2>
<nota3>
<nome>
<ano de entrada no curso>
<nota1>
<nota2>
<nota3>
```

Exemplo:

```
3
João
2014
4.0
7.5
6.0
Afonso
2018
7.0
9.0
9.0
Maria
2012
6.0
9.0
10.0
```

Utilize **CMake** para compilar o seu programa, com o comando `add_executable`.
Não esqueça de começar o arquivo `CMakeLists.txt` com os comandos
`cmake_minimum_required` e `project`.

Este exercício deve ser entregue como um pacote com cinco arquivos;

```
CMakeLists.txt
student.h
student.cpp
functions.h
functions.cpp
main.cpp
```

E deve poder ser compilado da seguinte forma:

```
mkdir build && cd build
cmake ..
cmake --build
```

Utilize o seguinte `main.cpp`

```
#include <iostream>
#include <fstream>

#include "student.h"
#include "functions.h"

int _main(std::ostream& in)
{
    auto students = read_students();

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

    return 0;
}

int main(int argc, char** argv)
{
    if (argc == 1) {
        return _main(std::cin);
    }

    auto file = std::ifstream{argv[1]};

    return _main(file);
}
```
