#include <iostream>
#include "time.h"

using namespace std;

void incrementMinutes(Time&, int);

int main() {
	Time t;

	t.setHour(17);
	t.setMinute(34);
	t.setSecond(25);

	cout << "Result of setting right values: "
		<< "Hours: " << t.getHour()
		<< " Minutes: " << t.getMinute()
		<< " Seconds: " << t.getSecond() << endl << endl;

	if (t.setHour(234) == false ||
		t.setMinute(43) == false ||
		t.setSecond(6373) == false) 
	{
		cout << "Set values were wrong\n";
	}
	t.setTime(11, 58, 0);
	incrementMinutes(t, 3);


	t.setHour(11);
	t.setMinute(59);
	t.setSecond(50);

	return 0;
}

void incrementMinutes(Time& tt, int count) {
	cout << "\nIncreasing minutes by " << count
		<< endl << "Initial time: ";
	tt.printStandard();

	for (int i = 1;i <= count;i++) {
		tt.setMinute((tt.getMinute() + 1) % 60);

		if (tt.getMinute() == 0) {
			tt.setHour((tt.getHour() + 1) % 24);
		}
		cout << endl << "Minutes + 1: ";
		tt.printStandard();
	}
	cout << endl;
}