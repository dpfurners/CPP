# C++ Dictionary

Any Word that might be confusing for me, or a word that needs a description will be listed here.

## C

#### Compiler

    The Compiler compiles the .cpp files to .obj files which will than be handled by Linker.
    It creates a .obj file for every .cpp file.

Steps:
- Preprocessing
- Compiling to machine code

## E

#### Error Codes

    There are different error codes that get displayed when compiling, building a cpp file

| Starts With | Description                                 |
|-------------|---------------------------------------------|
| C.....      | The error happened while compiling the file |
| LNK...      | The error happened while linking the files  |


## F

#### Files

    Overall Files have no meaning in C++. They are just used to feed the compiler with source code.

| Endings | Description                                                   |
|---------|---------------------------------------------------------------|
| .cpp    | The source code you write                                     |
| .obj    | The compiler translates the cpp files into these object files |
| .h      | The Header file can extend the cpp file                       |
| .exe    | The file that can be executed                                 |


## H

#### Header Files

    The Compiler replaces the statement #include "Header.h" with all the code from the header file


## L

#### Linker

    "linking" files together that need each other to work
    The linker needs the entry point (default main)
    When a function is defined static, and a symbol in it is not found, the linker does not care

Typical Errors:
- `symbol not found` - The linker cannot find the symbol anywhere
- `funcion ... already has a body` - function/variable is defined multiple times


## M

#### Main Function

    The Main Function is the Entry Point of every Programm.
    If a Programm doesn't provide a Main Function the programm would not compile.
    The function does not have to return any value (default 0).

Example:
```cpp
int main() 
{
    return 0;
}
```

## O

#### Optimization

    If it is enabled the compiler removes unneded code and optimizes it to be way faster


## P

#### Preprocessor Statements

    Statements that start with an # are defined as a Prepocessor Statement.
    These Statements will be executed before the Code will be compiled

| Example      | Description                                                      |
|--------------|------------------------------------------------------------------|
| #include     | Includes the content of a Header file into the current file      |
| #define      | Replaces the first word with the second word in the whole code   |
| #if / #endif | Includes code between to the compiler when the statement is true |
