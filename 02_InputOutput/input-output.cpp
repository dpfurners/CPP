// header file
#include <iostream>

// main function
int main()
{
    // std:: is the standard namespace
    // << is the output operator
    std::cout << "Enter two numbers:" << std::endl; // std::endl is a manipulator (end of line)
    // Define two variables
    int n1 = 0, n2 = 0;
    // >> is the input operator
    std::cin >> n1 >> n2;
    std::cout << "The sum of " << n1 << " and " << n2
              << " is " << n1 + n2 << std::endl;
    return 0;
}
