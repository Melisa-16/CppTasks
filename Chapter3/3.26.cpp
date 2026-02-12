//write function that has 3 parameters (hours,minutes and seconds).If it is passed 12 hours then 
//convert hours and minutes into seconds and find interval between 12 hours and that inputed time in seconds 

#include <iostream>
#include <cmath>

using namespace std;

int secondsPassed(int,int,int);

int main() {
	int hours;
	int minutes;
	int seconds;

	cout << "Enter first time's  hours: ";
	cin >> hours;
	cout << "Enter first time's minutes : ";
	cin >> minutes;
	cout << "Enter first time's seconds: ";
	cin >> seconds;

	int firstTimeSecondsAfterTwelve;
	firstTimeSecondsAfterTwelve = secondsPassed(hours, minutes, seconds);

	cout << "Seconds passed after 12 for first time: " 
		 << firstTimeSecondsAfterTwelve<<endl<<endl;

	out << "Enter second time's  hours: ";
	cin >> hours;
	cout << "Enter second time's minutes : ";
	cin >> minutes;
	cout << "Enter second time's seconds: ";
	cin >> seconds;c

	int secondTimeSecondsAfterTwelve;
	secondTimeSecondsAfterTwelve = secondsPassed(hours, minutes, seconds);

	cout << "Seconds passed after 12 for second time: " 
		 << secondTimeSecondsAfterTwelve<<endl<<endl;

	int timesDifference;
	timesDifference = abs(firstTimeSecondsAfterTwelve - secondTimeSecondsAfterTwelve);

	cout << "Interval between times: " << timesDifference<<endl;

	return 0;
}

int secondsPassed(int hours, int minutes, int seconds) {
	const int SECONDS_IN_ONE_HOUR = 3600;
	const int SECONDS_IN_ONE_MINUTE = 60;
	const int TWELVE_HOURS_CYCLE = 12;

	if (hours == TWELVE_HOURS_CYCLE) {
		hours = 0;
	}

	int totalSeconds;
	totalSeconds = hours * SECONDS_IN_ONE_HOUR + minutes * SECONDS_IN_ONE_MINUTE + seconds;

	return totalSeconds;
}