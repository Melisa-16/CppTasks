#include "Faculty.h"

Faculty::Faculty(string name, string surname, int age, double salary, string facultyName,string position)
    : Employee(name, surname, age, salary) {
    this->facultyName = facultyName;
    this->position = position;
}

string Faculty::getFacultyName() {
    return facultyName;
}
string Faculty::getPosition() {
    return position;
}