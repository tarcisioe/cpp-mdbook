#include <iostream>
#include <string>


namespace ref {

bool is_palindrome(std::string& s)
{
    auto i = s.size() - 1;

    for (auto j = 0u; j < s.size()/2; ++j) {
        if (s[j] != s[i]) {
            return false;
        }
        --i;
    }

    return true;
}

}

namespace const_ref {

bool is_palindrome(const std::string& s)
{
    auto i = s.size() - 1;

    for (auto j = 0u; j < s.size()/2; ++j) {
        if (s[j] != s[i]) {
            return false;
        }
        --i;
    }

    return true;
}

}


int main()
{
    using namespace std::string_literals;

    const auto word = "arara"s;

    std::cout << word << " is a palindrome: " << ref::is_palindrome(word) << '\n';
    std::cout << word << " is a palindrome: " << const_ref::is_palindrome(word) << '\n';
}
