#include <iostream>
#include "DateFormats.h"

using namespace std;

int main() {

    Date date1(6, 14, 1992);
    Date date2(14, 1992);
    Date date3("June", 14, 1992);

    date1.firstDateFormat();
    date2.secondDateFormat();
    date3.thirdDateFormat();

    return 0;
}