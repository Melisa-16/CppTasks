#ifndef JUNIOR_H
#define JUNIOR_H

#include "UndergraduateStudent.h"
#include <string>
using namespace std;

class Junior : public UndergraduateStudent {
private:
    string course;
public:
    Junior(string, string, int, string,
           double, int, int, double, double);

    string getCourse();
};

#endif