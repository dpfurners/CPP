# Comments in C++

- A **Comment** is a note that is added to the source code to explain the code or to make it more readable.
- Comments are ignored by the compiler.
- Comments are used to:
  - Explain the code
  - Make the code more readable
  - Prevent execution when testing alternative code
    

    !!! An incorrect comment can be worse than no comment at all. !!!

## Single Line Comments

- A **Single Line Comment** starts with `//` and ends with the end of the line.
- Any text between `//` and the end of the line is ignored by the compiler.
    
## Paired Comments

- A **Paired Comment** starts with `/*` and ends with `*/`.
- Any text between `/*` and `*/` is ignored by the compiler.
- Comment Pairs do not nest. (No `/*`/`*/` inside a comment pair)

## What will be the output of these lines of code?

```cpp
1. std::cout << "/*";
2. std::cout << "*/";
3. std::cout << /* "*/" */;
4. std::cout << /* "*/" /* "/*" */;
```

Output:

```cpp
1. /*
2. */
3. Error: The " is not closed
4. /*
```