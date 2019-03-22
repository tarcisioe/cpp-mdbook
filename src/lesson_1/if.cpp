#include <iostream>

int main()
{
    auto grade = 5.0;

    if (grade < 5.75) {
        std::cout << "Sorry, not this time.\n";
    } else if (grade < 8.0) {
        std::cout << "It's ok.\n";
    } else {
        std::cout << "Congratulations on that!\n";
    }
}
