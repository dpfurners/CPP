# Object-Oriented Programming in C++


## Introduction
Object-Oriented Programming is used to make blueprints of Real-Life objects based on code.
It is used to define objects with their attributes, methods and relations to other objects.


A class is a blueprint of an object. It defines the attributes and methods of an object.
It is a template for creating objects. The classes are defined outside the main function.

## Syntax
```cpp
class ClassName {
    // attributes
    // methods (behaviour)
};
```

## Access Modifiers

| Modifier | Description |
|----------|-------------|
| public | Accessible from anywhere |
| private | Accessible only from within the class |
| protected | Accessible from within the class and its derived classes |

By default, all the attributes and methods are private.

### Example
```cpp
class Employee {
    private:
        int salary;
    public:
        string name;
        string company;
        int age;
};
```

## Attributes
```cpp
class Employee {
    private:
        int salary;
    public:
        string name;
        string company;
        int age;
};
```

### Create Object

```cpp
ClassName objectName;
```

### Example
```cpp
Employee employee1;
employee1.name = "John";
employee1.company = "Google";
employee1.age = 25;
employee1.salary = 1000; // Error: salary is private
```

### Example when there is a pointer to the object
 `->` is used to access the attributes and methods of the object.
```cpp 
Employee *employee1 = new Employee();
employee1->name = "John";
employee1->company = "Google";
employee1->age = 25;
employee1->salary = 1000; // Error: salary is private
```

## Methods (Behaviours)

Methods are functions that are defined inside the class.

### Syntax
```cpp
class ClassName {
    // attributes
    // methods (behaviour)
    returnType methodName() {
        // method body
    }
};
```

### Example
```cpp
class Employee {
    private:
        int salary;
    public:
        string name;
        string company;
        int age;
        void introduceYourself() {
            cout << "Name - " << name << endl;
            cout << "Company - " << company << endl;
            cout << "Age - " << age << endl;
        }
};

int main() {
    Employee employee1;
    employee1.name = "John";
    employee1.company = "Google";
    employee1.age = 25;
    employee1.introduceYourself();
    return 0;
}
```

## Constructors

... are special methods that are used to initialize the attributes of an object.

### Syntax
```cpp
class ClassName {
    // attributes
    // methods (behaviour)
public:
    ClassName() { // This is the constructor
        // constructor body
    }
};
```

### Example
```cpp
class Employee {
private:
    int salary;
public:
    string name;
    string company;
    int age;
    void introduceYourself() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
    }
};

int main() {
    Employee employee1 = Employee("John", "Google", 25);
    employee1.introduceYourself();
    return 0;
}
```

## Encapsulation

Encapsulation is the process of hiding the implementation details of a class from the user.

Make the attributes private and provide public methods to access them.

### Example (Getters and Setters)
```cpp
class Employee {
private:
    int salary;
public:
    string name;
    string company;
    int age;
    void introduceYourself() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
    void setSalary(int salary) {
        if (salary >= 0) {
            this->salary = salary;
        }
    }
    int getSalary() {
        return salary;
    }
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
    }
};
```

## Abstraction

Abstraction is the process of hiding the implementation details of a class from the user.
If a class has a pure virtual function, it is called an abstract class. It cannot be instantiated.
If a class inherits an abstract class, it must implement all the pure virtual functions.

### Example
```cpp
class AbstactEmployee {
    virtual void askForPromotion() = 0;
};


class Employee: AbstactEmployee {
private:
    int salary;
public:
    string name;
    string company;
    int age;
    void introduceYourself() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
        cout << "Salary - " << salary << endl;
    }
    void setSalary(int salary) {
        if (salary >= 0) {
            this->salary = salary;
        }
    }
    int getSalary() {
        return salary;
    }
    void askForPromotion() {
        if (salary < 5000) {
            salary += 1000;
        }
    }
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
        this->salary = 4000;
    }
};

int main() {
    Employee employee1 = Employee("John", "Google", 25);
    employee1.introduceYourself();
    employee1.askForPromotion();
    employee1.introduceYourself();
    return 0;
}
```

## Inheritance

Inheritance is the process of inheriting the attributes and methods of a class.

### Syntax
```cpp
class DerivedClassName: public BaseClassName {
    // attributes
    // methods (behaviour)
};
```

### Example
```cpp
class Car {
public:
    string brand;
    string model;
    int year;
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }
};

class ElectricCar: public Car {
public:
    int battery;
    ElectricCar(string brand, string model, int year, int battery): Car(brand, model, year) {
        this->battery = battery;
    }
};

class PetrolCar: public Car {
public:
    int fuel;
    PetrolCar(string brand, string model, int year, int fuel): Car(brand, model, year) {
        this->fuel = fuel;
    }
};

int main() {
    ElectricCar car1 = ElectricCar("Tesla", "Model S", 2020, 100);
    PetrolCar car2 = PetrolCar("BMW", "X5", 2019, 50);
    cout << car1.brand << " " << car1.model << " " << car1.year << " " << car1.battery << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << " " << car2.fuel << endl;
    return 0;
}
```

## Polymorphism

Polymorphism is the process of using the same method name for different types of objects.

### Example
```cpp
class Car {
public:
    string brand;
    string model;
    int year;
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }
    void introduce() {
        cout << "Brand - " << brand << endl;
        cout << "Model - " << model << endl;
        cout << "Year - " << year << endl;
    }
};

class ElectricCar: public Car {
public:
    int battery;
    ElectricCar(string brand, string model, int year, int battery): Car(brand, model, year) {
        this->battery = battery;
    }
    void introduce() {
        cout << "Brand - " << brand << endl;
        cout << "Model - " << model << endl;
        cout << "Year - " << year << endl;
        cout << "Battery - " << battery << endl;
    }
};

class PetrolCar: public Car {
public:
    int fuel;
    PetrolCar(string brand, string model, int year, int fuel): Car(brand, model, year) {
        this->fuel = fuel;
    }
    void introduce() {
        cout << "Brand - " << brand << endl;
        cout << "Model - " << model << endl;
        cout << "Year - " << year << endl;
        cout << "Fuel - " << fuel << endl;
    }
};

int main() {
    ElectricCar car1 = ElectricCar("Tesla", "Model S", 2020, 100);
    PetrolCar car2 = PetrolCar("BMW", "X5", 2019, 50);
    car1.introduce();
    car2.introduce();
    
    car1.Car::introduce(); // call the parent class method
    return 0;
}
```

### Example (Virtual Functions)
```cpp
class Car {
public:
    string brand;
    string model;
    int year;
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }
    virtual void introduce() {
        cout << "Brand - " << brand << endl;
        cout << "Model - " << model << endl;
        cout << "Year - " << year << endl;
    }
};

class ElectricCar: public Car {
public:
    int battery;
    ElectricCar(string brand, string model, int year, int battery): Car(brand, model, year) {
        this->battery = battery;
    }
    void introduce() {
        cout << "Brand - " << brand << endl;
        cout << "Model - " << model << endl;
        cout << "Year - " << year << endl;
        cout << "Battery - " << battery << endl;
    }
};

class PetrolCar: public Car {
public:
    int fuel;
    PetrolCar(string brand, string model, int year, int fuel): Car(brand, model, year) {
        this->fuel = fuel;
    }
    void introduce() {
        cout << "Brand - " << brand << endl;
        cout << "Model - " << model << endl;
        cout << "Year - " << year << endl;
        cout << "Fuel - " << fuel << endl;
    }
};

int main() {
    ElectricCar car1 = ElectricCar("Tesla", "Model S", 2020, 100);
    PetrolCar car2 = PetrolCar("BMW", "X5", 2019, 50);
    
    Car *car3 = &car1;
    
    car3->introduce();
    return 0;
}
```