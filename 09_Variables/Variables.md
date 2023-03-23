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