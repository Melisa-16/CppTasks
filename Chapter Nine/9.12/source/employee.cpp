#include "Employee.h"

Employee::Employee(string name, string surname, int age, double salary)
    : MemberOfSociety(name, surname, age) {
    this->salary = salary;
}

double Employee::getSalary() {
    return salary;
}