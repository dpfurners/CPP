#include <iostream>
using namespace std;

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

int main() {
    Employee employee1 = Employee("John", "Google", 25);
    employee1.introduceYourself();
    employee1.setSalary(1000);
    cout << employee1.getSalary() << endl;
    return 0;
}
