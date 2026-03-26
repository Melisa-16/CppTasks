#include <iostream>
#include "Boss.h"

using namespace std;

Boss::Boss(const char* first, const char* last,Date birthday,int code, float s)
	:Employee(first, last,birthday,code) {
	setWeeklySalary(s);
}
void Boss::setWeeklySalary(float s) {
	weeklySalary = s > 0 ? s : 0;
}
float Boss::earnings() const {
	return weeklySalary;
}
void Boss::print() const {
	cout << endl << "        Administator: "
		<< getFirstName() << " " << getLastName();
}

float Boss::salaryIncreaser(int currentMonth){
	if (dateChecker(currentMonth)) {
		weeklySalary += BIRTHDAY_BONUS;
		return weeklySalary;
	}
	return earnings();

}