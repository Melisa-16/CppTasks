#include <iostream>
#include "Commis.h"

using namespace std;

CommissionWorker::CommissionWorker(const char* first, const char* last,Date birthday,int code,
	 float s, float c, unsigned q)
	:Employee(first, last,birthday,code) {
	salary = s > 0 ? s : 0;
	commission = c > 0 ? c : 0;
	quantity = q > 0 ? q : 0;
}
void CommissionWorker::setSalary(float s) {
	salary = s > 0 ? s : 0;
}
void CommissionWorker::setCommision(float c) {
	commission = c > 0 ? c : 0;
}
void CommissionWorker::setQuantity(unsigned q) {
	quantity = q > 0 ? q : 0;
}
float CommissionWorker::earnings() const {
	return salary + commission * quantity;
}
void CommissionWorker::print() const {
	cout << endl << "   Commission worker: "
		<< getFirstName() << " " << getLastName();
}
float CommissionWorker::salaryIncreaser(int currentMonth) {
	float total;
	if (dateChecker(currentMonth)) {
		total = earnings() + BIRTHDAY_BONUS;
		return total;
	}
	return earnings();
}