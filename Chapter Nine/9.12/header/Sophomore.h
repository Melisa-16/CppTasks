#ifndef SOPHOMORE_H
#define SOPHOMORE_H

#include "UndergraduateStudent.h"

class Sophomore : public UndergraduateStudent {
private:
    string course;
public:
    Sophomore(string, string, int, string,
              double, int, int, double, double);

    string getCourse();
};

#endif