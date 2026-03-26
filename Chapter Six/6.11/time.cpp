#include <iostream>
#include "time.h"

using namespace std;

Time::Time(int hr, int min, int sec) {
    setTime(hr, min, sec);
}

bool Time::setTime(int h, int m, int s) {
    if (h < 0 || h >= 24 || m < 0 || m >= 60 || s < 0 || s >= 60)
        return false;

    hour = h;
    minute = m;
    second = s;
    return true;
}

bool Time::setHour(int h) {
    if (h < 0 || h >= 24)
        return false;

    hour = h;
    return true;
}

bool Time::setMinute(int m) {
    if (m < 0 || m >= 60)
        return false;

    minute = m;
    return true;
}

bool Time::setSecond(int s) {
    if (s < 0 || s >= 60)
        return false;

    second = s;
    return true;
}
int Time::getHour() {
	return hour;
}
int Time::getMinute() {
	return minute;
}
int Time::getSecond() {
	return second;
}
void Time::printMilitary()
{
	cout << (hour < 10 ? "0" : " ") << hour << ":"
		<< (minute < 10 ? "0" : " ") << minute << ":"
		<< (second < 10 ? "0" : " ") << second;
}
void Time::printStandard() {
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
		<< (minute < 10 ? "0" : " ") << minute << ":"
		<< (second < 10 ? "0" : " ") << second
		<< (hour < 12 ? " AM" : " PM");
}