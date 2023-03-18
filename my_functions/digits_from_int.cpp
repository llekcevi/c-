#include <iostream>
#include <vector>
#include "my_functions.hpp"

int main(int argc, char const *argv[])
{   
    auto functions = MyFunctions();
    auto result = functions.extractDigits(100);

    for (int d : result)
    {
        std::cout << d << std::endl;
    }
    return 0;
}
