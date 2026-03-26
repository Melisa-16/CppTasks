#ifndef FACULTY_H
#define FACULTY_H

#include "Employee.h"

class Faculty : public Employee {
private:
    string facultyName;
    string position;
public:
    Faculty(string, string, int, double, string,string);

    string getFacultyName();
    string getPosition();
};

#endif