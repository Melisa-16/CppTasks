#ifndef SENIOR_H
#define SENIOR_H

#include "UndergraduateStudent.h"
#include <string>
using namespace std;

class Senior : public UndergraduateStudent {
private:
    string course;
public:
    Senior(string, string, int, string,
           double, int, int, double, double);

    string getCourse();
};

#endif