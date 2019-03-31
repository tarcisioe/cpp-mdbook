#include <iostream>
#include <numeric>  // std::accumulate
#include <vector>


namespace value {

double average_squares(std::vector<double> values)
{
    for (auto& i: values) {
        i *= i;
    }

    return std::accumulate(begin(values), end(values), 0.0)/values.size();
}

}


namespace const_ref {

double average_squares(const std::vector<double>& values)
{
    auto total = 0.0;

    for (auto i: values) {
        total += i*i;
    }

    return total/values.size();
}

}

int main()
{
    auto values = std::vector<double>(1000000);

    std::iota(begin(values), end(values), 1.0);

    std::cout << value::average_squares(values) << '\n';
    std::cout << const_ref::average_squares(values) << '\n';
}


namespace const_ref {

double average_squares(const std::vector<double>& values)
{
    for (auto& i: values) {
        i *= i;
    }

    return std::accumulate(begin(values), end(values), 0.0)/values.size();
}

}
