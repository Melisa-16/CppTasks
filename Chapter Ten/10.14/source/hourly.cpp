#include <iostream>
#include "Hourly.h"

using namespace std;

HourlyWorker::HourlyWorker(const char* first, const char* last,Date birthday,int code,
	float w, float h) :Employee(first, last,birthday,code) {
	wage = w > 0 ? w : 0;
	hours = h >= 0 && h < 168 ? h : 0;
}
void HourlyWorker::setHours(float h) {
	hours = h >= 0 && h < 168 ? h : 0;
}
float HourlyWorker::earnings() const {
	return wage * hours;
}
void HourlyWorker::print() const {
	cout << endl << "       Hourly Worker: "
		<< getFirstName() << " " << getLastName();
}
float HourlyWorker::salaryIncreaser(int currentMonth) {
	float totalWage;
	if (dateChecker(currentMonth)) {
		totalWage = earnings() + BIRTHDAY_BONUS;
		return totalWage;
	}
	return earnings();
}