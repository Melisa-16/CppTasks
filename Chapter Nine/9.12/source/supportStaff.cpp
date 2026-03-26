#include "SupportStaff.h"

SupportStaff::SupportStaff(string name, string surname, int age, double salary, string jobName)
    : Employee(name, surname, age, salary) {
    this->jobName = jobName;
}

string SupportStaff::getJobName() {
    return jobName;
}