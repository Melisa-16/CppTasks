#include "rational.h"
#include <iostream>

using namespace std;

int main() {

    cout << "First fraction: ";
    rational obj(5, 6);
    obj.printingAsFraction();
    cout << " (";
    obj.printingAsFloatNumber();
    cout <<")"<< endl;

    cout << "Second fraction: ";
    rational obj2(7, 8);
    obj2.printingAsFraction();
    cout << " (";
    obj2.printingAsFloatNumber();
    cout << ")"<<endl;

    rational result;

    cout << "\nAdditioning second fraction to first : ";
    result.adding(obj, obj2);
    result.printingAsFraction();

    cout << endl;
    cout << "Substracting second fraction from first: ";
    result.substraction(obj, obj2);
    result.printingAsFraction();

    cout << endl;
    cout << "Multiplying two fraction: ";
    result.multiplying(obj, obj2);
    result.printingAsFraction();

    cout << endl;
    cout << "Dividing first fraction to second: ";
    result.division(obj, obj2);
    result.printingAsFraction();

    return 0;
}