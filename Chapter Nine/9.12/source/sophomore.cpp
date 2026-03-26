#include "Sophomore.h"

Sophomore::Sophomore(string name, string surname, int age, string profession,
    double averageMark, int yearOfAdmission,
    int credits, double tuition, double stipend)
    : UndergraduateStudent(name, surname, age, profession, averageMark,
        yearOfAdmission, credits, tuition, stipend)
{
    course = "Sophomore";
}

string Sophomore::getCourse() {
    return course;
}