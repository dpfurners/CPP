# Escape Sequences in C++

- Escape sequences are a way to represent certain characters in a string.
- There are also special escape sequences, that have a special meaning.
- Escape Sequences are represented by a backslash `\` followed by a character.

Examples:

- `\n` - new line
- `\t` - tab
- `\b` - backspace
- `\"` - double quote
- `\'` - single quote
- `\\` - backslash
- `\?` - question mark
- `\r` - carriage return
- `\a` - alert (bell)


## Escape Sequences in C++

```cpp
#include <iostream>

int main() {
    std::cout << "Hello\tWorld" << endl;
    std::cout << "Hello\nWorld" << endl;
    std::cout << "Hello\bWorld" << endl;
    std::cout << "Hello\"World" << endl;
    std::cout << "Hello\'World" << endl;
    std::cout << "Hello\\World" << endl;
    std::cout << "Hello\?World" << endl;
    std::cout << "Hello\rWorld" << endl;
    std::cout << "Hello\aWorld" << endl;
    return 0;
}
```

Output:

```commandline
Hello   World
Hello
World
HelloWorld
Hello"World
Hello'World
Hello\World
Hello?World
World
HelloWorld
```

