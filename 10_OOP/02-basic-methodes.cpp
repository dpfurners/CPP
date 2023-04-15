#include <iostream>
#include <string>
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
};

int main() {
    Employee employee1;
    employee1.name = "John";
    employee1.company = "Google";
    employee1.age = 25;
    employee1.introduceYourself();
    return 0;
}
