#include <iostream>

using namespace std;

class Date {
public:
	Date(int = 1, int = 1, int = 1990);

	void print();
	void nextDay();
	void setDate(int,int,int);
private:
	int month;
	int day;
	int year;
};

Date::Date(int m, int d, int y) {
	setDate(m, d, y);
}
void Date::setDate(int m, int d, int y) {
	month = (m > 0 && m <= 12) ? m : 0;
	day = (d > 0 && d <= 31) ? d : 0;
	year = (y > 0) ? y : 0;
}
void Date::print()
{
	cout << month << '-' << day << '-' << year;
}
void Date::nextDay() {

	int daysInMonth;

	if (month == 4 || month == 6 || month == 9 || month == 11) {
		daysInMonth = 30;
	}
	else if (month == 2) {
		daysInMonth = 28;
	}
	else {
		daysInMonth = 31;
	}
	day++;

	if (day > daysInMonth) {
		day = 1;
		month++;

		if (month > 12) {
			month = 1;
			year++;
		}
	}
}


int main() {
	Date date1(7, 4, 1993), date2;

	cout << "date1 = ";
	date1.print();

	cout << endl << "date2 = ";
	date2.print();

	date2 = date1;

	cout << endl << endl
		<< "After copying: ";
	date2.print();
	cout << endl;

	Date date3(12, 30, 2025);
	date3.print();
	cout << endl;

	for (int i = 1;i < 5;i++) {
		date3.nextDay();
		date3.print();
		cout << endl;
	}
	return 0;
}