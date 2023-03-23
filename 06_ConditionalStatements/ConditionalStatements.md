# Conditional Statements in C++

A **Conditional Statement** is a programming structure that executes a sequence of instructions if a specific condition is met.


## If-Else Statement

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

## The `else if` Statement

- The `else if` statement is used to execute a sequence of instructions if the condition is false and another condition is true.
- The `else if` statement can be used multiple times in a single `if` statement.

Syntax:
```cpp
if (condition1)
{
    // sequence of instructions, if condition1 is true
}
else if (condition2)
{
    // sequence of instructions, if condition1 is false and condition2 is true
}
else if (condition3)
{
    // sequence of instructions, if condition1 is false, condition2 is false and condition3 is true
}
else
{
    // sequence of instructions, if all conditions are false
}
```

Example:
```cpp
# include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;
    if (num > 10)
    {
        std::cout << "The number is greater than 10" << std::endl;
    }
    else if (num < 10)
    {
        std::cout << "The number is less than 10" << std::endl;
    }
    else
    {
        std::cout << "The number is equal to 10" << std::endl;
    }
    return 0;
}
```

Example (count the amount of equal numbers in an input):

```cpp
#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}
```