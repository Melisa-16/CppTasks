#include <iostream>
#include "DateAndTime.h"

using namespace std;

int main() {

    DateAndTime dayWithTime(12, 59, 58, 12, 31, 2025);

    cout << "Military time: ";
    dayWithTime.printMilitary();
    cout << endl;

    cout << "Standard time: ";
    dayWithTime.printStandard();
    cout << endl;

    cout << "Date: ";
    dayWithTime.print();
    cout << endl;

    cout << "After tick: " << endl;
    for (int i = 1;i < 5;i++) {
        dayWithTime.tick();
        dayWithTime.printStandard();
        cout << endl;
    }

    dayWithTime.print();

    cout << endl;
    return 0;
}