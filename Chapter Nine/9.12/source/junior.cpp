#include "Junior.h"

Junior::Junior(string name, string surname, int age, string profession,
    double averageMark, int yearOfAdmission,
    int credits, double tuition, double stipend)
    : UndergraduateStudent(name, surname, age, profession, averageMark,
        yearOfAdmission, credits, tuition, stipend)
{
    course = "Junior";
}

string Junior::getCourse() {
    return course;
}