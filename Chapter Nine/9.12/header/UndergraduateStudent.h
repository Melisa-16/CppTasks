#ifndef UNDERGRADUATESTUDENT_H
#define UNDERGRADUATESTUDENT_H

#include "Student.h"
#include <string>
using namespace std;

class UndergraduateStudent : public Student {
public:
    UndergraduateStudent(string, string, int, string,
                         double, int,int, double, double);
};

#endif