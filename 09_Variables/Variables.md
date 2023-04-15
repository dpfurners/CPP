# Variables in C++

- Variables store values.
- They provide us with named storage that our programs can manipulate.
- Each variable in C++ has a specific type

## Declaring Variables

- To create a variable, you must first declare it.
- A variable declaration tells the compiler that a variable exists and what type it is.
- When a variable is declared, it is not given a value. And the value is not known until the program assigns one.

Syntax:
```cpp
type variable_name; // Declare one variable
type variable_name1, variable_name2; // Declare multiple variables
```

Example:
```cpp
int a; // Declare a variable named a of type int
int b, c; // Declare two variables named b and c of type int
```

## Initializing Variables

- You can initialize a variable when you declare it.
- This means that you can assign a value to the variable at the same time that you declare it.

Syntax:
```cpp
type variable_name = value; // Declare and initialize one variable
type variable_name1 = value1, variable_name2 = value2; // Declare and initialize multiple variables
```

Example:
```cpp
int a = 10; // Declare and initialize a variable named a of type int
int b = 20, c = 30; // Declare and initialize two variables named b and c of type int
```

## Identifiers

- ... are names given to entities like variables, functions, arrays, etc.
- ... can be a combination of letters, digits and underscore.
- ... must begin with a letter or an underscore.
- ... are case sensitive.
- ... have no length limit.
- ... cannot be a keyword.

## Naming Conventions

- ... are a set of rules for choosing identifiers.
- ... are followed by most C++ programmers.
- ... are not mandatory.

**Naming conventions for variables:**
- Use meaningful names.
- Normally use lowercase letters.
- Use underscore to separate words.
- Classes use PascalCase.


## Scope of Names

**Scope:**
- The scope of a name is the region of the program where the name is defined.
- The scope of a name starts from the point where it is declared and ends at the end of the block in which it is declared.
- The scope of a variable can be either local or global.
  - Local variables are declared inside a function or a block.
  - Global variables are declared outside of all functions.
- The same name can be used for different entities in different scopes.

Example:
```cpp
#include <iostream>

int main() { // main is a global name/entity in the scope of the program
    int sum = 0; // a is a local variable in the scope of the main function
    for (int i = 0; i < 10; i++) { // i is a local variable in the scope of the for loop
        sum += i;
    }
    // i cannot be accessed here (out of scope)
    std::cout << sum << std::endl;
    return 0;
}
```

## Nested Scopes

- A scope can be nested inside another scope.
- You can separate between inner and outer scopes.
  - Inner scopes can access outer scopes but not vice versa.
  - Inner scopes can access outer scopes' names but not vice versa.
  - Inner scopes can access outer scopes' entities but not vice versa.
  - Inner scopes can access outer scopes' variables but not vice versa.
- The same name can be used for different entities in different scopes.

Example:
```cpp
#include <iostream>

using namespace std;

int reused = 42; // reused has global scope

int main() {
    int unique = 0; // unique has block/local scope
    cout << reused << " " << unique << endl; // Uses the global reused (42) and the local unique (0)
    int reused = 0; // new, local object named reused hides global reused
    cout << reused << " " << unique << endl; // Uses the local reused (0) and the local unique (0)
    // explicitly request the global reused
    cout << ::reused << " " << unique << endl; // Uses the global reused (42) and the local unique (0)
    return 0;
}
```

## Constants

- Constants are values that cannot be changed.
- Constants can be declared using the `const` keyword.
- Constants can be declared using the `#define` preprocessor directive.
- A Constant must be initialized when it is declared.

Example:
```cpp
const int a = 10; // Declare a constant named a of type int
#define b 20 // Declare a constant named b of type int
```

Constants are Local to the File except you use the `extern` keyword.

Example:
```cpp
// file1.cpp
extern const int a = 10; // Declare a constant named a of type int
```

```cpp
// file2.cpp
extern const int a; // Declare a constant named a of type int
```

### References to Constants

A reference to const cannot be used to change the value of the object to which it refers.

Example:
```cpp
const int a = 10;
const int &b = a; // b is a reference to a

b = 20; // Error: b is a reference to const

int &c = a; // Error: c is a reference to non-const
```

You can use a reference to const to initialize a reference to non-const.

Example:
```cpp
int a = 20;
const int &b = a; // we can bind a const int& to a plain int object

const int &c = 42; // ok: we can bind a const int& to a literal
const int &d = b * 2; // ok: result is a literal

int &e = b * 2; // error: we cannot bind an ordinary int& to a literal
```

You are able to reference to a different type of object as long as the type of the object can be converted to the type of the reference.

Example:
```cpp
double dval = 3.14;
const int &ri = dval; // ri refers to an int that has the value 3
// compiler converts dval to an int and binds ri to that int
```

### Pointers to Constants

- A pointer to const cannot be used to change the value of the object to which it points.
- A pointer to a const object also has to be defined as a const pointer.
- You can not assign a value to a pointer to const.
- When you define a pointer as a const pointer the pointer itself is not a constant it just points to a constant.

Example:
```cpp
const double pi = 3.14;
double *ptr = &pi; // Error: ptr is a pointer to non-const

const double *cptr = &pi; // cptr is a pointer to const
*cptr = 42; // Error: pi is a const

double dval = 3.14;
cptr = &dval; // ok: cptr can point to a double but can't change the value of the double
```

### Constant Pointers

- The pointer itself is a constant and cannot change the address it points to.
- To define a constant pointer you use the `*` before the `const` keyword.

Example:
```cpp
int errNumb = 0;
int *const curErr = &errNumb; // curErr will always point to errNumb

const double pi = 3.14;
const double *const pip = &pi; // pip is a constant pointer to a constant object
```

### Top-Level vs Low-Level Constants

    Top Level -> The pointer itself is a Constant.
    Low Level -> The value the pointer points to is a Constant.

Example:
```cpp
int i = 0;
int *const p1 = &i; // Top-Level Constant

const int ci = 42;
const int *p2 = &ci; // Low-Level Constant

const int *const p3 = p2; // Both Top-Level and Low-Level Constant

const int &r = ci; // Low-Level Constant (const in reference types is always Low-Level)
```

#### Copying Objects

- When we copy an object, top-level const is ignored.
- When we copy an object, low-level const is preserved.

Example (With the same code as above):
```cpp
i = ci; // ok: copy the value of ci (top-level const in ci is ignored)
p2 = p3; // ok: copy the value of p3 (low-level const in p3 is ignored)
int *p = p3; // error: copy the value of p3 (low-level const in p3 is not ignored)
p2 = &i; // ok: copy the address of i (conversion from int* to const int* is allowed)
int &r = ci; // error: copy the address of ci (conversion from const int* to int& is not allowed)
const int &r2 = i; // ok: copy the address of i (conversion from int* to const int& is allowed)
```

### Constant Expressions

- A constant expression is an expression whose value cannot change and that can be evaluated at compile time.
- A Literal is a constant expression.
- A const object that is initialized with a constant expression is a constant expression.
- If a variable is a constant expression depends on how it is initialized.

Example:
```cpp
const int max_files = 20; // max_files is a constant expression
const int limit = max_files + 1; // limit is a constant expression
int staff_size = 27; // staff_size is not a constant expression
const int sz = get_size(); // sz is not a constant expression (get_size() cannot be evaluated at compile time)
```

Examples with `constexpr`:
```cpp
constexpr int mf = 20; // mf is a constant expression
constexpr int limit = mf + 1; // limit is a constant expression
constexpr int sz = size(); // ok, if size is a constexpr function
```

### Pointers and Constant Expressions
- When we define a pointer as a constexpr the pointer itself is a constant expression.
- A Constant pointer can point to constant and non-constant object.

Example:
```cpp
const int *p = nullptr; // p is a pointer to const
constexpr int *q = nullptr; // p is a constant expression
```
