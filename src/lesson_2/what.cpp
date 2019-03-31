#include <iostream>
#include <vector>  // std::vector


int main()
{
    auto v = std::vector<int>{};

    v = {1, 2, 3, 4};

    std::cout << "in v:\n";

    for (auto i: v) {
        std::cout << i << '\n';
    }

    auto w = std::vector<int>{4, 3, 2, 1};

    std::cout << "in w:\n";

    for (auto i: w) {
        std::cout << i << '\n';
    }
}
