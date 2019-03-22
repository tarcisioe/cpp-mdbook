Um programa simples em C++
--------------------------
Vamos iniciar com um programa bastante simples em C++, utilizando números
inteiros e um pouquinho de texto, e imprimindo algumas informações na tela:

```cpp
{{#include age.cpp}}
```

Iniciamos nosso código com a seguinte diretiva:

```cpp
{{#include age.cpp:0:2}}
```

Em C++, a diretiva `#include` é a forma de incluir em nosso código as
declarações necessárias para utilizar código externo. No caso, estamos
incluindo o _header_ `iostream`, que é a parte da biblioteca padrão da
linguagem que permite lidar com _input_ e _output_. Com ela, poderemos escrever
dados na tela durante a execução do programa.

Na sequência, temos a introdução de uma **função**, chamada `main`:

```cpp
{{#include age.cpp:4:5}}
```

Veremos essa função em todos os executáveis que criarmos. Ela demarca o ponto
de início de execução do código, do ponto de vista do programador.  Veremos
posteriormente como alterá-la para lidar com argumentos quando necessário, mas
no momento `()` significa que nenhum parâmetro é passado para o programa.

Dentro da função `main`, encontramos nossas primeiras _variáveis_, que servem
para representar os dados com os quais o programa trabalhará.  Variáveis em C++
possuem um tipo e um valor. O tipo de uma variável nunca muda, mas seu valor
pode mudar durante a execução do programa.

```cpp
{{#include age.cpp:6:8}}
```

A variável `year` é uma variável do tipo `int`, que é utilizado para
representar números inteiros com sinal. Desta forma, um ano anterior ao ano 0
poderia ser representado como um número negativo, por exemplo.

A variável `age`, por sua vez, representa uma idade, que não pode ser negativa.
Mesmo assim, utilizamos `int`, para garantir que possamos fazer aritmética com
`year` sem problemas.

Enquanto `year` e `age` são de tipos ditos _primitivos_, ou seja, tipos
suportados diretamente pela linguagem, `name` é de um tipo _composto_, ou seja,
implementado em C++, utilizando tipos primitivos em sua implementação. No
caso, `name` é do tipo `std::string`, que utilizaremos sempre que quisermos
representar texto.

A implementação de `std::string` fica na biblioteca padrão de C++, que é um
conjuto de código pronto que sempre acompanha o compilador, implementando uma
série de funcionalidades comuns para dar suporte à criação de novos programas e
bibliotecas. É para usá-la que incluímos `string` via `#include` no início do
código.

A variável `name`, por sua vez, é de um tipo não-primitivo, ou seja,
um tipo definido em C++, em algum lugar da biblioteca padrão. Esse
é o tipo `std::string`, que utilizaremos para representar texto.

Finalmente, temos as linhas a seguir:

```cpp
{{#include age.cpp:8:}}
```

A sequência de usos do operador `<<` utiliza o objeto `std::cout` para escrever
na tela. `std::cout` representa a _saída padrão_ do programa, que em geral
é o terminal onde ele é executado.

Com isso, conseguimos fazer um programa simples em C++ que já faz uma breve
interação com o usuário e um pouco de aritmética. Na sequência, veremos
como faremos para vê-lo em ação.
