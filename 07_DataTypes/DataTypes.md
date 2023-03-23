### DataTypes in C++

A **Data Type** is a classification of data that determines the possible values for that type, the operations that can be performed on values of that type, and the meaning of the data.

Separated into:
- Primitive Types
  - Character
  - Integer
  - Floating Point
- User Defined Types
  - Mechanisms for creating new types

#### Primitive Types

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

#### Signed and Unsigned Integers

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

#### Machine-Level Representation Data Types

The Type determines how the data is stored in memory. It also determines, how many bits are used and how to interpret those bits.


#### Type Conversions

The ability to convert between types is a fundamental feature of C++.

These conversions can be done implicitly or explicitly.

##### Implicit Conversions

Implicit conversions are performed automatically by the compiler.

```cpp
int i = 3.14; // i = 3
unsigned char c = -1; // c = 255
```

##### Explicit Conversions

Explicit conversions are performed by the programmer.

```cpp
int i = static_cast<int>(3.14); // i = 3
unsigned char c = static_cast<unsigned char>(-1); // c = 255
```