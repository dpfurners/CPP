#include <iostream>
#include <utility>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;
    Car(string brand, string model, int year) {
        this->brand = std::move(brand);
        this->model = std::move(model);
        this->year = year;
    }
    void startCar() {
        cout << "Car started" << endl;
    }
};

class ElectricCar: public Car {
public:
    int battery;
    ElectricCar(string brand, string model, int year, int battery): Car(std::move(brand), std::move(model), year) {
        this->battery = battery;
    }
    void loadBattery(int battery) {
        this->battery += battery;
    }
};

class PetrolCar: public Car {
public:
    int fuel;
    PetrolCar(string brand, string model, int year, int fuel): Car(std::move(brand), std::move(model), year) {
        this->fuel = fuel;
    }
    void loadFuel(int fuel) {
        this->fuel += fuel;
    }
};

int main() {
    ElectricCar car1 = ElectricCar("Tesla", "Model S", 2020, 100);
    PetrolCar car2 = PetrolCar("BMW", "X5", 2019, 50);
    cout << car1.brand << " " << car1.model << " " << car1.year << " " << car1.battery << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << " " << car2.fuel << endl;

    car1.startCar();
    car2.startCar();
    car1.loadBattery(50);
    car2.loadFuel(20);

    cout << car1.brand << " " << car1.model << " " << car1.year << " " << car1.battery << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << " " << car2.fuel << endl;
    return 0;

}