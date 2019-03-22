O laço `while`
--------------

É muito comum, ao programar, ser necessário repetir alguma operação diversas
vezes, até alcançar alguma condição. Para isso utilizaremos _laços_. Veremos 3
tipos de laços. O primeiro, e mais simples, é o laço `while`. O código nesse
laço irá rodar enquanto uma dada condição for verdadeira. Veja o código a
seguir:

```cpp
{{#include while.cpp}}
```

Vamos analisar o `while` parte a parte:

```cpp
{{#include while.cpp:9}}
```

A condição do `while` é dada de forma semelhante ao `if`. Ela deve ser um valor
booleano (`true` ou `false`). O corpo do laço executará repetidas vezes, até
que, **ao final** de uma das execuções, a condição deixe de ser verdadeira.

O código acima calcula, de forma numérica, a raiz quadrada de um número
qualquer `x`. Isso é feito utilizando o método de Newton.

O método de Newton se baseia em um chute inicial. Esse chute pode ser
maior, menor ou igual ao valor da raiz quadrada.

Após fazer um chute inicial (no nosso caso, arbitrariamente fixado em `1.0`), é
feita a média do valor chutado com `x` dividido pelo chute, nas linhas a seguir:

```cpp
{{#include while.cpp:10:11}}
```

Vamos acompanhar as possibilidades:

Se o chute for muito abaixo da resposta real, `x/guess` será muito acima da
resposta real (pois a raiz quadrada é o número que, ao dividir `x`, resulta
nele mesmo), e a média entre os dois se aproximará da resposta. Por exemplo:

* Seja `x = 36`.
* Seja `guess = 3` (abaixo do valor correto, `6`).
* `x/guess == 12`, ou seja, acima do valor correto.
* A média entre `guess` e `x/guess` será `7.5`, aproximando-se da resposta
  correta.

O exato oposto também pode acontecer: se `x` for maior que a resposta correta,
`x/guess` será menor que a resposta e a média se aproximará do valor procurado.

* Seja `x = 36`.
* Seja `guess = 15` (acima do valor correto, `6`).
* `x/guess == 2.4`, ou seja, abaixo do valor correto.
* A média entre `guess` e `x/guess` será `8.7`, também aproximando-se da
  resposta correta.

O resultado será usado como um novo chute, e o chute anterior é registrado na
variável `old`.

Perceba a condição do while: ele se quebra quando o chute anterior for igual ao
novo chute. Isso ocorrerá quando a resposta for a correta, pois `guess` será a
raiz quadrada de `x`, logo `x/guess` será igual a `guess`, e também à média.

No geral, o laço while é uma forma ideal de representarmos a repetição de
operações quando não sabemos o número necessário de repetições, e sim uma
condição booleana de parada. Quando nós sabemos quantos passos dar, é mais
interessante utilizarmos o laço `for`. Que veremos a seguir.

Antes disso, porém, vamos prestar atenção na seguinte parte do código:

```cpp
{{#include while.cpp:4:5}}
   // (...)
{{#include while.cpp:13}}
```

Com este código estamos definindo uma _função_. Funções são a unidade mais
básica de **reuso de código**. O código de uma função pode ser _chamado_
em outros pontos do programa.

```cpp
//     tipo de retorno     nome do primeiro argumento
//    /                   /
{{#include while.cpp:4}}
//          \       \
//           nome   tipo do primeiro argumento
```

Aqui temos a declaração da função. Nela definimos o seguinte:
1. O *tipo de retorno* da função. Toda função necessita retornar algo de um
   tipo específico e predefinido.
2. O nome da função, para que ela possa ser utilizada posteriormente.
3. Os argumentos da função. Todo argumento possui um tipo e um nome, e
   fica disponível no corpo da função, como qualquer outra variável.

Funções são utilizadas em outros pontos do código através de chamadas, como
podemos ver na seguinte linha:

```cpp
{{#include while.cpp:17}}
```

> Nota: Não é coincidência que a sintaxe de chamada de função é muito
  semelhante à notação de aplicação de funções na matemática. O conceito
  de funções em programação guarda diversas semelhanças ao conceito de
  funções matemáticas.

Visto isso, vamos então ao laço `for`.
