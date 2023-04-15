#include <iostream>
using namespace std;


class Employee {
private:
    int salary;
public:
    string name;
    string company;
    int age;
};

int main(){
    Employee employee1;
    employee1.name = "John";
    employee1.company = "Google";
    employee1.age = 25;
    // employee1.salary = 1000; // Error: salary is private
}