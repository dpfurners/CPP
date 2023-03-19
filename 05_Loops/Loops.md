### Loops in C++

A **Loop** is a programming structure that repeats a sequence of instructions until a specific condition is met.

#### While Loop

- A **While Loop** repeats a sequence of instructions while a condition is true.
- The condition is evaluated before each iteration.
- If the condition is true, the sequence of instructions is executed.
- If the condition is false, the sequence of instructions is skipped and the next statement after the loop is executed.

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