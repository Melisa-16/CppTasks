#ifndef MEMBEROFSOCIETY_H
#define MEMBEROFSOCIETY_H

#include <string>

using namespace std;

class MemberOfSociety {
private:
	string name;
	string surname;
	int age;
public:
	MemberOfSociety(string, string, int);
	string getName();
	string getSurname();
	int getAge();
};
#endif