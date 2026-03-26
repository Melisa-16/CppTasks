#include <iostream>
#include <cstring>
#include <cassert>
#include "employ.h"

Employee::Employee(const char* first, const char* last,Date birthday,int code) {

    firstName = new char[strlen(first) + 1];
    assert(firstName != nullptr);
    strcpy_s(firstName, strlen(first) + 1, first);

    lastName = new char[strlen(last) + 1];
    assert(lastName != nullptr);
    strcpy_s(lastName, strlen(last) + 1, last);

    birthDate = birthday;
    departmentCode = code;
}
Employee::~Employee() {
    delete[] firstName;
    delete[] lastName;
}

const char* Employee::getFirstName() const {
    return firstName;
}

const char* Employee::getLastName() const {
    return lastName;
}
Date Employee::getDate() {
    return birthDate;
}
bool Employee::dateChecker(int currentMonth) {
    if (getDate().month == currentMonth) {
        return 1;
    }
    else {
        return 0;
    }
}