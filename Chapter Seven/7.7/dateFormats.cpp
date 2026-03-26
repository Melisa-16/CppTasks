#include <iostream>
#include "dateFormats.h"

using namespace std;


string months[] = { "January","February","March","April",
                    "May","June","July","August",
                    "September","October","November","December" };

Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;   
}

Date::Date(int d, int y) {
    day = d;
    month = 1;
    year = y;
}

Date::Date(string monthName, int d, int y) {
    day = d;
    year = y;

    for (int i = 0; i < 12; i++) {
        if (months[i] == monthName) {
            month = i;
            break;
        }
    }
}

void Date::firstDateFormat() {
    cout << month << "/" << day << "/" << year % 100 << endl;
}

void Date::secondDateFormat() {
    cout << day << " " << year << endl;
}

void Date::thirdDateFormat() {
    cout << months[month] << " " << day << ", " << year << endl;
}
