#include "Student.h"

Student::Student(string name, string surname,
    int age, string profession,
    double averageMark, int yearOfAdmission,
    int credits, double tuition, double stipend)
    : MemberOfSociety(name, surname, age)
{
    this->profession = profession;
    this->averageMark = averageMark;
    this->yearOfAdmission = yearOfAdmission;
    this->credits = credits;
    this->tuition = tuition;
    this->stipend = stipend;
}

//set functions
void Student::setTuition(double tuition) {
    this->tuition = tuition;
}
void Student::setStipend(double stipend) {
    this->stipend = stipend;
}
void Student::setAverageMark(double averageMark) {
    this->averageMark = averageMark;
}
void Student::setCredit(int credits) {
    this->credits = credits;
}
void Student::setProfession(string profession) {
    this->profession = profession;
}


//get functions
double Student::getTuition() {
    return tuition;
}
double Student::getStipend() {
    return stipend;
}
double Student::getAverageMark() {
    return averageMark;
}
int Student::getAdmissionYear() {
    return yearOfAdmission;
}
string Student::getProfession() {
    return profession;
}
int Student::getCredits() {
    return credits;
}