#include <iostream>
using namespace std;

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
