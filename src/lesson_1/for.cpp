#include <iostream>
#include <vector>  // std::vector

double average(std::vector<double> grades)
{
    auto sum = 0.0;
    auto size = grades.size();

    for (auto i = 0u; i < size; ++i) {
        sum += grades[i];
    }

    return sum/size;
}


int main()
{
    auto grades = std::vector<double>{9.0, 8.0, 4.0};

    std::cout << average(grades) << '\n';
}
