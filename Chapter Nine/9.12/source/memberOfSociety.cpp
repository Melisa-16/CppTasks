#include <iostream>
#include "MemberOfSociety.h"
#include <string>

MemberOfSociety::MemberOfSociety(string name, string surname, int age) {
	this->name = name;
	this->surname = surname;
	this->age = age;
}
string MemberOfSociety::getName() {
	return name;
}
string MemberOfSociety::getSurname(){
	return surname;
}
int MemberOfSociety::getAge() {
	return age;
}