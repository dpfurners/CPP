## Namespaces in C++

A **Namespace** is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.

**Namespaces** are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

### The `std` Namespace

#### Use the `std` Namespace "normally"

When we use the `std::cout` object, we are using the `std` namespace.
```cpp
#include <iostream>

int main()
{
    std::cout << "Enter a number: " << std::endl;
    int n1 = 0;
    std::cin >> n1;
    std::cout << "The number is: " << n1 << std::endl;
    return 0;
}
```

#### Using `cout` without the `std::` prefix

A **using** declaration can be used to import a name from a namespace into the current scope.

```cpp
#include <iostream>
using std::cout;

int main()
{
    cout << "Enter a number: " << std::endl;
    int n1 = 0;
    std::cin >> n1;
    cout << "The number is: " << n1 << std::endl;
    return 0;
}
```

#### Using `cout`, `cin` and `endl` without the `std::` prefix
`cin` and `endl` can not be used without the `std::` prefix because it is not declared in the scope.

But we can include the `using` declaration for `std::cin`/`srd::endl` as well.

```cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter a number: " << endl;
    int n1 = 0;
    cin >> n1;
    cout << "The number is: " << n1 << endl;
    return 0;
}
```

#### `using` directive (include a whole namespace)

We can also use the `using` directive to import all names from a namespace into the current scope.

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: " << endl;
    int n1 = 0;
    cin >> n1;
    cout << "The number is: " << n1 << endl;
    return 0;
}
```