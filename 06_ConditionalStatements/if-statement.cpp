#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    if (num > 10)
    {
        std::cout << "The number is greater than 10" << std::endl;
    }
    return 0;
}
