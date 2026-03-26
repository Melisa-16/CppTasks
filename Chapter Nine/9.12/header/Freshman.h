#ifndef FRESHMAN_H
#define FRESHMAN_H

#include "UndergraduateStudent.h"
#include <string>
using namespace std;

class Freshman : public UndergraduateStudent {
private:
    string course;
public:
    Freshman(string, string, int, string,
            double, int,int, double, double);

    string getCourse();
};

#endif