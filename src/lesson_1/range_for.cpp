#include <iostream>
#include <vector>  // std::vector

double average(std::vector<double> grades)
{
    auto sum = 0.0;

    for (auto i: grades) {
        sum += i;
    }

    return sum/grades.size();
}


int main()
{
    auto grades = std::vector<double>{9.0, 8.0, 4.0};

    std::cout << average(grades) << '\n';
}
