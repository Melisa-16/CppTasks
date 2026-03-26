#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "Student.h"
#include <string>
using namespace std;

class GraduateStudent : public Student {
private:
    int graduationYear;

public:
    GraduateStudent(string, string, int, string,
        double, int, int, int, double, double);

    int getGraduationYear();
};

#endif