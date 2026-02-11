//Write a program that finds the smallest of several
//integers.Assume that the first number read sets the number
//of subsequent numbers entered.

#include <iostream>

using namespace std;

int main() {

    int firstNumber;
    int nextNumber;
    int minimumNumber;

    cout << "Enter first number (also number of following inputs): ";
    cin >> firstNumber;


    minimumNumber = firstNumber;

    for (int i = 2; i <= firstNumber; i++) {

        cout << "Enter next number: ";
        cin >> nextNumber;

        if (nextNumber < minimumNumber) {
        
            minimumNumber = nextNumber;
        
        }
    
    }

    cout << "Minimum number is  " << minimumNumber << "\n";

    return 0;
}