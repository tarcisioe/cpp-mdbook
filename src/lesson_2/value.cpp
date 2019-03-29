#include <iostream>
#include <vector>


namespace fibo {

std::vector<int> to_n(int n)
{
    auto fibs = std::vector<int>{};

    auto f1 = 0;
    auto f2 = 1;

    while (n != 0) {
        fibs.push_back(f1);
        auto aux = f1;
        f1 = f2;
        f2 += aux;
        --n;
    }

    return fibs;
}

}


int main()
{
    auto n = 10;
    auto fibs = fibo::to_n(n);

    std::cout << n << '\n';
}
