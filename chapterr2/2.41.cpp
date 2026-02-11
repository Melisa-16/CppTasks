//Write a program that calculates and prints the average
//of several integers.Assume that the last readable
//value is the 9999.A typical input
//sequence may look like
//       10 8 11 7 9 9999
//showing that the average value of the numbers
//preceding 9999 should be calculated.

#include <iostream>

using namespace std;

int main() {

    int sum ;
    int number;
    int count;

    sum = 0;
    count = 0;

    cout << "Enter  number (or 9999 to end): ";
    cin >> number;

    const int LIMIT = 9999;

    while ( number != LIMIT ) {

        sum += number;
        count++;

        cout << "Enter next number (or 9999 to end): ";
        cin >> number;
    
    }


    if (count > 0) {

        double averageValue;

        averageValue = (double) sum / count;

        cout << "Average  = " << averageValue << "\n";
    
    }
    else {

        cout << "Nothing was entered";
    
    }

    return 0;
}