#include <iostream>  // std::cout
#include <string>  // std::string

int main()
{
    int year = 2019;
    int age = 26;
    std::string name = "Tarcísio";
    std::cout << "Hello, " << name
              << ". I see you were born in "
              << year - age << "!\n";
}
