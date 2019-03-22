#include <iostream>  // std::cout
#include <cmath>  // sqrt

double square_root(double x)
{
    auto old = 0.0;
    auto guess = 1.0;

    while (guess != old) {
        old = guess;
        guess = (guess + x/guess)/2;
    }
}

int main()
{
    std::cout << square_root(2) << "\n";
    std::cout << sqrt(2) << "\n";

    return 0;
}
