# DataTypes in C++

A **Data Type** is a classification of data that determines the possible values for that type, the operations that can be performed on values of that type, and the meaning of the data.

Separated into:
- Primitive Types
  - Character
  - Integer
  - Floating Point
- User Defined Types
  - Mechanisms for creating new types

## Primitive Types

These Types are Defined in the C++ Language itself.

- **Arithmetic Types**
  - _Integral Types_
    - **Character**
      - `char` -> 1 Byte (Character)
      - `wchar_t` -> 2 Bytes (Wide Character)
      - `char16_t` -> 2 Bytes (Unicode Character)
      - `char32_t` -> 4 Bytes (Unicode Character)
    - **Integer**
      - `short` -> 2 Bytes (Short Integer)
      - `int` -> 4 Bytes (Integer)
      - `long` -> 4 Bytes (Long Integer)
      - `long long` -> 8 Bytes (Long Long Integer)
    - **Boolean**
      - `bool` -> NA (Boolean)
    - ...
  - _Floating Point Types_
    - **Float**
      - `float` -> 4 Bytes/6 Significant digits (Single Precision Floating Point)
    - **Double**
        - `double` -> 8 Bytes/10 Significant digits (Double Precision Floating Point)
        - `long double` -> 16 Bytes/10 Significant digits (Extended Precision Floating Point)
    - ...
- **Void (Special Type)**

## Signed and Unsigned Integers

- Signed: Can be positive or negative
- Unsigned: Can only be positive

To make a type signed or unsigned, you can add the `signed` or `unsigned` keyword to the type.

```cpp
signed int i = -1;
unsigned int j = 1;
```

Unlike to other integer types, there are 3 distinct basic character types: 
- `char`
- `signed char`
- `unsigned char`

How the `char` type is interpreted depends on the compiler and the platform.

## Machine-Level Representation Data Types

The Type determines how the data is stored in memory. It also determines, how many bits are used and how to interpret those bits.


## Type Conversions

The ability to convert between types is a fundamental feature of C++.

These conversions can be done implicitly or explicitly.

### Implicit Conversions

Implicit conversions are performed automatically by the compiler.

```cpp
int i = 3.14; // i = 3
unsigned char c = -1; // c = 255
```

### Explicit Conversions

Explicit conversions are performed by the programmer.

```cpp
int i = static_cast<int>(3.14); // i = 3
unsigned char c = static_cast<unsigned char>(-1); // c = 255
```

## Literals

A literal is a notation for representing a fixed value in source code.

```cpp
int i = 42; // 42 is a literal
```

### Integer Literals

Integer literals can be written in decimal, octal, or hexadecimal notation.

Example: 25
```cpp
int i1 = 25;    // decimal
int i2 = 031;   // octal
int i3 = 0x19;  // hexadecimal
```

### Floating-Point Literals

Floating-point literals can be written in decimal or scientific notation.

Example: 3.14
```cpp
double d1 = 3.14;   // decimal
double d2 = 31.4e-1 // scientific
```

### Character Literals

Character literals are written with single quotes.

Example: 'a'
```cpp
char c1 = 'a';  // character
char c2 = '\141';   // octal
char c3 = '\x61';   // hexadecimal
```

### String Literals

String literals are written with double quotes.

Example: "Hello World"
```cpp
char s1[] = "Hello World";  // string
```

### Boolean Literals

Boolean literals are either `true` or `false`.

```cpp
bool b1 = true;
bool b2 = false;
```

## String Data Type
- Used to store a sequence of variable-length characters.
- `<iostream>` header file includes the string but `<string>` is a better option.

Defining/Initializing a string:
```cpp
#include <string>       // #include <iostream>
using std::string;      // using namespace std;

string n1;  // empty string
string n2 (n1); // n2 is a copy of n1
string n2 = n1; // equivalent to n2(n1) copy
string n3 ("value"); // n3 is a copy of the string literal "value"
string n3 = "value"; // equivalent to n3("value")
string n4 (10, 'c'); // n4 is "cccccccccc"
```

### Operations on Strings

#### Reading and Writing Strings

Read one Word at a time:
```cpp
string s1;
cin >> s1;  // read a whitespace-separated string into s1
// Hello World
cout << s1 << endl; // write the value of s1 followed by a newline
// Hello
``` 
Read multiple words:
```cpp
string s2, s3;
cin >> s2 >> s3;    // read a whitespace-separated string into s2 and s3
// World of C++
cout << s2 << " " << s3 << endl;    // write the value of s2 and s3 followed by a newline
// World of
```
Read an unknown number of words:
```cpp
string word;
while (cin >> word) // read until end-of-file, storing each word into word
// Hello World of C++     
cout << word << endl;   // write each word followed by a newline
// Hello
// World
// of
// C++
```
Read an entire line:
```cpp
string line;
while (getline(cin, line))  // read until end-of-file, storing the line into line
// Hello World of C++
cout << line << endl;   // write each line followed by a newline
// Hello World of C++
```

#### Information about Strings

Empty string operation:
```cpp
string s1;  // empty string
while (getline(cin, s1)) {  // read until end-of-file, storing the line into s1
    if (!s1.empty()) {  // if s1 is not empty
        cout << s1 << endl; // write the line we just read
    }
    else {
        cout << "Empty String" << endl;
    }
}
```

Size of a string:
```cpp
string s1;
while (getline(cin, s1)) {  // read until end-of-file, storing the line into s1
    if (!s1.empty()) {  // if s1 is not empty
        cout << s1.size() << endl; // write the size of the line we just read
    }
    else {
        cout << "Empty String" << endl;
    }
}
```

Comparing Strings if they are equal:
```cpp
string s1 = "Hello", s2 = "World";
cout << (s1 == s2) << endl; // 0
cout << (s1 != s2) << endl; // 1
```

Comparing Strings if they are bigger or smaller:
1. If the first character that does not match has a greater value in s1 than in s2, then s1 is greater than s2.
2. If the first character that does not match has a smaller value in s1 than in s2, then s1 is less than s2.
```cpp
string s1 = "Hello", s2 = "World";
cout << (s1 < s2) << endl;  // 1 H is smaller than W (alphabetical order)
cout << (s1 > s2) << endl;  // 0 H is not bigger than W (alphabetical order)

string s3 = "Hello", s4 = "Hellooo";
cout << (s3 < s4) << endl;  // 1 s3 is smaller than s4 (length)
cout << (s3 > s4) << endl;  // 0 s3 is not bigger than s4 (length)

string s1 = "Hello", s2 = "Hellow", s3 = "W";
cout << (s1 < s2) << endl;  // 1 s1 is smaller than s2 (length)
cout << (s1 > s2) << endl;  // 0 s1 is not bigger than s2 (length)
cout << (s1 < s3) << endl;  // 1 s1 is smaller than s3 (alphabetical order)
cout << (s1 > s3) << endl;  // 0 s1 is not bigger than s3 (alphabetical order)
```

#### String manipulation

Assigning a string:
```cpp
string s1 = "Hello";
string s2 = s1; // s2 is a copy of s1
string s3 (3, 'c'); // s3 is "ccc"
```

Adding two strings:
```cpp
string s1 = "Hello", s2 = "World";
string s3 = s1 + s2;    // s3 is "HelloWorld"
string s4 = s1;
s4 += s2;   // s4 is "HelloWorld"
```

Adding Literals and Strings:
```cpp
string s1 = "Hello", s2 = "World";
string s3 = s1 + ", " + s2 + "!";   // s3 is "Hello, World!"
string s4 = "Hello" + "World"; // error: can't add two string literals
string s5 = "Hello" + "World" + s1; // error: can't add two string literals
```

#### Dealing with individual characters
- `isalnum(c)` - if c is a letter or a digit (is alphanumeric)
- `isalpha(c)` - if c is a letter (is alphabetic)
- `iscntrl(c)` - if c is a control character (is \n, \t, \r, etc.)
- `isdigit(c)` - if c is a digit
- `isgraph(c)` - if c is a printing character other than a space
- `islower(c)` - if c is a lowercase letter
- `isupper(c)` - if c is an uppercase letter#
- `isprint(c)` - if c is a printing character (is a space)
- `ispunct(c)` - if c is a punctuation character (is not a space, letter, or digit)
- `isspace(c)` - if c is a whitespace character (is " ", \n, \t, \r, etc.)
- `isxdigit(c)` - if c is a hexadecimal digit (is a digit or a letter from a-f or A-F)
- `tolower(c)` - convert c to lowercase
- `toupper(c)` - convert c to uppercase

#### Dealing with every character in a string

Using the `for` loop:
```cpp
string s1 = "Hello World";
for (auto c : s1) {
    cout << c << endl;
}
```

Manually iterating through a string:
```cpp
string s1 = "Hello World";
for (auto &c : s1) {
    c = toupper(c);
}
cout << s1 << endl; // HELLO WORLD
```

#### Dealing with some characters in a string

Using the subscript operator:
```cpp
string s1 = "Hello World";
if (!s1.empty()) {
    s1[0] = tolower(s1[0]);
}
cout << s1 << endl; // hello World
```

Capitalize the first word in a string:
```cpp
string s1 = "hello world";
for (decltype(s1.size()) index = 0; index != s1.size() && !isspace(s1[index]); ++index) {
    s1[index] = toupper(s1[index]);
}
cout << s1 << endl; // HELLO world
```


### References

A reference is an alias for an object or a function.

- Once a reference is initialized, it cannot be changed to refer to another object.
- There is no way to rebind a reference to another object.
- A reference is not an object, it is just another name for an object.
- Operations on references are exactly the same as operations on the object to which the reference refers.
- Reference and the object to which it refers must be of the **same type**.

Defining a reference:
```cpp
int i = 42;

// define a reference to i
int& r = i;

// define a reference to a reference
int& r2 = r;

int& r3; // error: a reference must be initialized

int &r4 = 42; // error: rvalue reference initializer must be an object
```

### Pointers

A pointer is a variable that stores the address of another variable.

- A pointer is an object in its own right.
- Pointers can be assigned and copied. -> a single pointer can be made to point to different objects over its lifetime.
- A pointer need not be initialized at the time it is defined.
- We get the address of an object using the `&` operator.
- The type of the pointer must match the type of the object to which the pointer points.
- null pointer: a pointer that is not associated with any object.

Defining a pointer:
```cpp
int i = 42;

// define a pointer to i
int* p = &i;

// define a pointer to a pointer
int** p2 = &p;

int* p3; // ok: p3 is not initialized

p3 = &i; // ok: p3 is now initialized

int* p4 = 0; // ok: p4 is initialized to the null pointer
int* p5 = nullptr; // ok: p5 is initialized to the null pointer
int* p6 = NULL; // ok: p6 is initialized to the null pointer
```

Access the value of a pointer:
```cpp
int i = 42;

int* p = &i;

std::cout << p << std::endl; // prints the adddress of i
std::cout << *p << std::endl; // prints 42
```

### Type Aliases
- Synonyms for types that already exist
- Simplifies complex types
- Emphasizes the meaning of a type


#### Using `typedef`
```cpp
typedef double wages; // wages is a synonym for double
typedef float percent; // percent is a synonym for float
```

#### Using `using`
```cpp
using char = letter; // letter is a synonym for char
using int = num; // num is a synonym for int
```

#### Auto Type
- Used when the type of the variable is unclear

Example:
```cpp
auto i = 0; // i is an int
auto d = 3.14; // d is a double
auto b = true; // b is a bool
```

As a declaration:
```cpp
auto i = 0, *p = &i; // i is an int, p is a pointer to int
auto sz = 0, pi = 3.14; // error: sz and pi have different types
```

### Decltype Type
- Used to declare a variable that has the same type as its initializer
- Sets the type of the variable to the type a given expression would have if it were evaluated
- Does not call the expression

Example:
```cpp
decltype(f()) sum = x; // sum has whatever type f returns

const int ci = 0, &cj = ci;
decltype(ci) x = 0; // x is an const int
decltype(cj) y = x; // y is a const int& that is bound to x

decltype(cj) z; // error: z is a reference and must be initialized
```

#### Decltype and References
- When we apply decltype to an exression that is not a variable, we get the type that that expression yields.

Example:
```cpp
int i = 42, *p = &i, &r = i;
decltype(r + 0) b; // b is an int
decltype(*p) c; // c is an int& and must be initialized
```

decltype((variable)) is always a reference type, even if variable is not a reference.

Example:
```cpp
int i = 42;
decltype(i) b; // b is an int
decltype((i)) c; // c is an int& and must be initialized
``` 
