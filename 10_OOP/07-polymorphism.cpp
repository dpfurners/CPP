#include <iostream>
using namespace std;

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
    car1.Car::introduce(); // Call the parent method

    Car *car3 = &car1; // Pointer to the parent class
    car3->introduce(); // Call the parent method
    return 0;
}
