#include <string>

namespace strings {

bool is_palindrome(const std::string &s)
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
