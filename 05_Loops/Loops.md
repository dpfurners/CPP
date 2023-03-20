### Loops in C++

A **Loop** is a programming structure that repeats a sequence of instructions until a specific condition is met.
- The condition is evaluated before each iteration.
- If the condition is true, the sequence of instructions is executed.
- If the condition is false, the sequence of instructions is skipped and the next statement after the loop is executed.

#### While Loop

A **While Loop** repeats a sequence of instructions while a condition is true.

Syntax:
```cpp
while (condition)
{
    // sequence of instructions
}
```

Example:
```cpp
#include <iostream>

int main()
{
    int count = 1;
    while (count <= 10)
    {
        std::cout << "Hello there" << std::endl;
        count++; // count = count + 1;
    }
}
```

#### For Loop
A **For Loop** repeats a sequence of instructions for a specific number of times.

Syntax:
```cpp
for (initialization; condition; increment)
{
    // sequence of instructions
}
```

Example:
```cpp
#include <iostream>

int main()
{
    for (int count = 1; count <= 10; count++)
    {
        std::cout << "Hello there" << std::endl;
    }
    return 0;
}
```

#### Using istream as a condition

The istream object can be used as a condition in a loop.<br>
If the input does not match the expected type, the loop will stop.

The following program reads an unknown amount of inputs from the user and prints the sum of all the inputs.<br>
When the user enters a non-numeric value (or an EOF -> Ctrl + Z), the program stops reading inputs and prints the sum.

```cpp
# include <iostream>

int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
```