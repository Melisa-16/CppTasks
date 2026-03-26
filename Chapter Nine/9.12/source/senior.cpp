#include "Senior.h"

Senior::Senior(string name, string surname, int age, string profession,
    double averageMark, int yearOfAdmission,
    int credits, double tuition, double stipend)
    : UndergraduateStudent(name, surname, age, profession, averageMark,
        yearOfAdmission, credits, tuition, stipend)
{
    course = "Senior";
}

string Senior::getCourse() {
    return course;
}