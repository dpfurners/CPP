## Input and Output in C++

To use input and output in C++ we need to include the `iostream` library.
This Library defines the standard input/output stream objects.

**Stream** -> Sequence of data read from or written to a IO device.

IO Objects defined in the `iostream` library:
- `std::cin` -> standard input stream (type: `istream`)
- `std::cout` -> standard output stream (type: `ostream`)
- `std::cerr` -> standard error stream (type: `ostream`)
- `std::clog` -> standard logging stream (type: `ostream`)

Basic Input/Output Example [here](https://github.com/dpfurners/CPP/blob/master/02_InputOutput/input-output.cpp):
```cpp
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

```
