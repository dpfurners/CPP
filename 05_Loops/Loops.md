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
