#include <vector>
#include <iostream>


int main()
{
    auto v = std::vector<int>{1, 2, 3, 4};
    auto w = std::vector<int>{4, 3, 2, 1};

    std::cout << "Before: v[3] = " << v[3] << "\n";

    v[3] = 42;

    std::cout << "Now: v[3] = " << v[3] << "\n";

    auto n = v.size();

    std::cout << "n = v.size() = " << n << "\n";

    std::cout << "Before: v[n-1] = " << v[n-1] << "\n";

    v.push_back(777);

    n = v.size();  // Atualiza tamanho do vetor

    std::cout << "n = v.size() = " << n << "\n";
    std::cout << "Now: v[n-1] = " << v[n-1] << "\n";

    std::cout << "v[n-2] = " << v[n-2] << "\n";

    v.pop_back();

    n = v.size();

    std::cout << "Popped vector's back\n";
    std::cout << "n = v.size() = " << n << "\n";
    std::cout << "Now: v[n-1] = " << v[n-1] << "\n";

    std::cout << "v[n-2] = " << v[n-2] << "\n";

    auto strings = std::vector<std::string>{ "Hello", "World", "!" };

    std::cout << "strings = {\""
              << strings[0] << "\", \""
              << strings[1] << "\", \""
              << strings[2] << "\"}\n";

    std::cout << "With strings' contents we can say... you had it coming:\n";
    std::cout << strings[0] << ", " << strings[1] << strings[2] << "\n";

    // strings.push_back(3);
}
