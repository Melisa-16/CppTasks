#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "MemberOfSociety.h"

class Employee : public MemberOfSociety {
private:
    double salary;

public:
    Employee(string, string, int, double);

    double getSalary();
};

#endif