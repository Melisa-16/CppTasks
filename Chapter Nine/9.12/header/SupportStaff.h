#ifndef SUPPORT_H
#define SUPPORT_H

#include "Employee.h"

using namespace std;

class SupportStaff : public Employee {
private:
    string jobName;

public:
    SupportStaff(string, string, int, double, string);

    string getJobName();
};

#endif
