#include <iostream>

int main ()
{
    int total = 0;
    int num = 51;
    
    while (num < 100)
    {
        total += num;
        num++;
    }

    std::cout << total << std::endl;
    

    return 0;
}