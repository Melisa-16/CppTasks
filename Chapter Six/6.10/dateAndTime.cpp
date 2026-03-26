#include <iostream>
#include "DateAndTime.h"

using namespace std;

DateAndTime::DateAndTime(int hr, int min, int sec,int m,int d,int y) {
	setTime(hr, min, sec);
	setDate(m, d, y);
}
void DateAndTime::setTime(int h, int m, int s) {
	hour = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? m : 0;
	second = (s >= 0 && s < 60) ? s : 0;
}
void DateAndTime::setHour(int h) {
	hour = (h >= 0 && h < 24) ? h : 0;
}
void DateAndTime::setMinute(int m) {
	minute = (m >= 0 && m < 60) ? m : 0;
}
void DateAndTime::setSecond(int s) {
	second = (s >= 0 && s < 60) ? s : 0;
}
int DateAndTime::getHour() {
	return hour;
}
int DateAndTime::getMinute() {
	return minute;
}
int DateAndTime::getSecond() {
	return second;
}
void DateAndTime::printMilitary()
{
	cout << (hour < 10 ? "0" : " ") << hour << ":"
		<< (minute < 10 ? "0" : " ") << minute << ":"
		<< (second < 10 ? "0" : " ") << second;
}
void DateAndTime::printStandard() {
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< (minute < 10 ? "0" : " ") << minute << ":"
		<< (second < 10 ? "0" : " ") << second
		<< (hour < 12 ? " AM" : " PM");
}

void DateAndTime::tick() {
	second++;

	if (second == 60) {
		second = 0;
		minute++;
	}
	 if (minute == 60) {
		minute = 0;
		hour++;
	}
	if (hour == 24) {
		second = 0;
		minute = 0;
		hour = 0;
		nextDay();
	}
}

//date
void DateAndTime::setDate(int m, int d, int y) {
	month = (m > 0 && m <= 12) ? m : 0;
	day = (d > 0 && d <= 31) ? d : 0;
	year = (y > 0) ? y : 0;
}
void DateAndTime::print()
{
	cout << month << '-' << day << '-' << year;
}
void DateAndTime::nextDay() {
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
