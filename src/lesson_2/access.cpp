#include <iostream>
#include <vector>


int main()
{
    auto v = std::vector<int>{1, 2, 3, 4};
    auto w = std::vector<int>{4, 3, 2, 1};

    std::cout << "v[0] = " << v[0] << ", w[2] = " << w[2] << "\n";

    std::cout << "v.size() = " << v.size() << "\n";

    std::cout << "v.front() = " << v.front() << "\n";

    std::cout << "v.back() = " << v.back() << "\n";

    std::vector<int> q = {};

    std::cout << "q.empty() = " << q.empty() << "\n";

    if (q.empty()) {
        std::cout << "q is empty\n";
    } else {
        std::cout << "there's something inside q\n";
    }
}
