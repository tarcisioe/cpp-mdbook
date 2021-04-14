#include <iostream>
#include <vector>


namespace vectors {

void zero_all(std::vector<int>& ints)
{
    for (auto& i: ints) {
        i = 0;
    }
}

}


int main()
{
    auto v = std::vector<int>{1, 2, 3, 4};

    vectors::zero_all(v);

    for (auto i: v) {
        std::cout << i << '\n';
    }
}
