#include "GraduateStudent.h"

GraduateStudent::GraduateStudent(string name, string surname, int age, string profession,
    double averageMark, int yearOfAdmission, int graduationYear,
    int credits, double tuition, double stipend)
    : Student(name, surname, age, profession, averageMark, yearOfAdmission, credits, tuition, stipend)
{
    this->graduationYear = graduationYear;
}

int GraduateStudent::getGraduationYear() {
    return graduationYear;
}