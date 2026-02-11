//write function that finds  greater common divisor for two integer numbers

#include <iostream>

using namespace std;

int greatestCommonDivisorFinder(int,int);

int main() {

    int firstInteger;
    int secondInteger;

    cout << "Enter 2 integer numbers: ";
    cin >> firstInteger >> secondInteger;

    int greaterDivisor = greatestCommonDivisorFinder(firstInteger, secondInteger);

    cout <<"Greatest common divisor: " <<greaterDivisor;

    return 0;
}

int greatestCommonDivisorFinder(int firstNumber, int secondNumber) {

    int greaterCommonDivisor = 1;

    for (int i = 2;i <= secondNumber;i++) {

        if (firstNumber % i == 0 && secondNumber % i == 0) {

            if (i > greaterCommonDivisor) {

                greaterCommonDivisor = i;

            }

        }
    }

    return greaterCommonDivisor;
}