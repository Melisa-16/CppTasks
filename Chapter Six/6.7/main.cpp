#include "rational.h"
#include <iostream>

using namespace std;

int main() {
    rational firstFraction(5, 6);
    rational secondFraction(7, 8);

    cout << "First fraction: ";
    firstFraction.printingAsFraction();
    cout << " (";
    firstFraction.printingAsFloatNumber();
    cout << ")" << endl;

    cout << "Second fraction: ";
    secondFraction.printingAsFraction();
    cout << " (";
    secondFraction.printingAsFloatNumber();
    cout << ")" << endl;

    cout << "\nAddition of first and second: ";
    rational firstResult = firstFraction.adding(secondFraction);
    firstResult.printingAsFraction();

    cout << "\nSubtraction of second from first: ";
    rational secondResult = firstFraction.subtraction(secondFraction);
    secondResult.printingAsFraction();

    cout << "\nMultiplication of first and second: ";
    rational thirdResult = firstFraction.multiplying(secondFraction);
    thirdResult.printingAsFraction();

    cout << "\nDivision of first by second: ";
    rational fourthResult = firstFraction.division(secondFraction);
    fourthResult.printingAsFraction();

    cout << endl;

    return 0;
}
