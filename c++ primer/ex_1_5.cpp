#include <iostream>

int main() 
{
    std::cout << "Enter two numbers:" << std::endl; 
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "First number is: " << v1 << std::endl;
    std::cout << "Second number is: " << v2  << std::endl;
    std::cout << "The product of first and second number is: " << v1*v2 << std::endl;
    return 0;
}