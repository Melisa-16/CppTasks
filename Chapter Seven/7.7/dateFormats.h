#ifndef DATEFORMATS_H
#define DATEFORMATS_H

#include <string>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date();

    // MM/DD/YY
    Date(int m, int d, int y);

    // DD YYYY 
    Date(int d, int y);

    // Month DD, YYYY
    Date(string monthName, int d, int y);

    void firstDateFormat();
    void secondDateFormat();
    void thirdDateFormat();
};

#endif