#include <iostream>
#include <vector>
#include "my_functions.hpp"

std::vector<int> MyFunctions::extractDigits(int n)
{
    std::vector<int> digits;

    for (int i = 1; i <= n + 1; i = i * 10)
    {
        digits.push_back((n / i) % 10);
    }

    digits.shrink_to_fit();
    return digits;
}