Exercícios
==========

Implemente o algoritmo __insertion sort__, descrito em pseudocódigo abaixo:

```
insertion-sort(vector A):
    for i = 1 to A.size-1:
        k = A[i]
        j = i - 1
        while j > -1 and A[j] > k:
            A[j + 1] = A[j]
            j -= 1
        A[j + 1] = k
```

Perceba que o parâmetro `A` no pseudocódigo está tipado como um `vector`. Em C++, este
parâmetro precisará ser um `std::vector`. Utilize o que foi visto em aula para fazer
de sua implementação um template de função que possa ordenar um `std::vector` de
qualquer tipo.

Enumere em um comentário características que estão sendo assumidas sobre o tipo
genérico utilizado, como pontos ou discorrendo em um parágrafo. Não é
necessária uma descrição formal, apenas anote o que perceber.

Utilize CMake para compilar o seu projeto, com o seguinte `main.cpp`:

```cpp
#include <iostream>
#include <memory>
#include <vector>

#include "insertion_sort.hpp"

namespace {

class DynInt {
public:
    DynInt(int value):
        value_{std::make_unique<int>(value)}
    {}

    auto value() const
    {
        return *value_;
    }

private:
    std::unique_ptr<int> value_;
};

std::ostream& operator<<(std::ostream& out, DynInt const& di)
{
    out << "DynInt{" << di.value() << "}";
    return out;
}

bool operator<(DynInt const& rhs, DynInt const& lhs)
{
    return rhs.value() < lhs.value();
}

}

int main()
{
    using namespace std::string_literals;

    auto print_vector = [](auto const & v)
    {
        std::cout << "{ ";
        for (auto &&i: v) {
            std::cout << i << " ";
        }
        std::cout << "}\n";
    };

    auto vi = std::vector{2, 1, 4, 3};

    algorithm::insertion_sort(vi);

    print_vector(vi);

    auto vs = std::vector{"test"s, "prototype"s, "production"s, "angel"s, "nerv"s, "gehirn"s};

    algorithm::insertion_sort(vs);

    print_vector(vs);

    auto vdi = std::vector<DynInt>{};
    vdi.emplace_back(3);
    vdi.emplace_back(2);
    vdi.emplace_back(4);
    vdi.emplace_back(1);

    algorithm::insertion_sort(vdi);

    print_vector(vdi);
}
```
