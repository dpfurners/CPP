### Conditional Statements in C++

A **Conditional Statement** is a programming structure that executes a sequence of instructions if a specific condition is met.


#### If-Else Statement

- The `if` statement is used to execute a sequence of instructions if a condition is true.
- The `else` statement is used to execute a sequence of instructions if the condition is false. (optional)

Syntax:
```cpp
if (condition)
{
    // sequence of instructions, if condition is true
}
else
{
    // sequence of instructions, if condition is false
}
```

Example `If`:
```cpp
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
```

Example `If-Else`:
```cpp
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
    else
    {
        std::cout << "The number is less than or equal to 10" << std::endl;
    }
    return 0;
}
```