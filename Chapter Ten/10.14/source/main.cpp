#include <iostream>
#include <iomanip>
#include "Employ.h"
#include "Boss.h"
#include "Commis.h"
#include "Piece.h"
#include "Hourly.h"

using namespace std;

int main() {
	cout << setiosflags(ios::showpoint) << fixed << setprecision(2);

	int currentMonth = 3;

	Boss b("John", "Smith", { 24,3,1980 }, 1, 800.0);
	CommissionWorker c("Sue", "Jones", { 16,7,1990 }, 2, 200.0, 3.0, 150);
	PieceWorker p("Bob", "Lewis", { 3,3,1983 }, 3, 2.5, 200);
	HourlyWorker h("Karen", "Price", { 1,3,1999 }, 4, 13.75, 40);

	cout << endl << "Initial salaries before increasing" << endl;

	b.print();
	cout << " - " << b.earnings();

	c.print();
	cout << " - " << c.earnings();

	p.print();
	cout << " - " << p.earnings();

	h.print();
	cout << " - " << h.earnings() << endl << endl;

	cout << "Salary will be increased if worker was born on " << currentMonth << " month" << endl;

	b.print();
	cout << " - " << b.salaryIncreaser(currentMonth);

	c.print();
	cout << " - " << c.salaryIncreaser(currentMonth);

	p.print();
	cout << " - " << p.salaryIncreaser(currentMonth);

	h.print();
	cout << " - " << h.salaryIncreaser(currentMonth) << endl;

	return 0;
}