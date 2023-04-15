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
