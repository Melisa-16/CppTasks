#include <iostream>
#include "HugeInteger.h"

using namespace std;

int main() {
    HugeInteger firstArray;
    HugeInteger secondArray;

    // Input
    cout << "Enter first huge integer:\n";
    firstArray.inputHugeInteger();

    cout << "Enter second huge integer:\n";
    secondArray.inputHugeInteger();

    // Output
    cout << "\nFirst array: ";
    firstArray.outputHugeInteger();

    cout << "Second array: ";
    secondArray.outputHugeInteger();

    // Addition
    HugeInteger sum = firstArray.addHugeIntegers(secondArray);
    cout << "\nSum of arrays: ";
    sum.outputHugeInteger();

    // Subtraction
    HugeInteger difference = firstArray.substractHugeIntegers(secondArray);
    cout << "Difference of arrays: ";
    difference.outputHugeInteger();

    // Comparisons
    cout << "\nComparisons:\n";

    cout << "First array is "
        << (firstArray.isEqualTo(secondArray) ? "equal to" : "not equal to")
        << " second array\n";

    cout << "First array is "
        << (firstArray.isNotEqualTo(secondArray) ? "not equal to" : "equal to")
        << " second array\n";

    cout << "First array is "
        << (firstArray.isGreaterThan(secondArray) ? "greater than" : "not greater than")
        << " second array\n";

    cout << "First array is "
        << (firstArray.isLessThan(secondArray) ? "less than" : "not less than")
        << " second array\n";

    cout << "First array is "
        << (firstArray.isGreaterThanOrEqualTo(secondArray) ? "greater than or equal to" : "less than")
        << " second array\n";

    cout << "First array is "
        << (firstArray.isLessThanOrEqualTo(secondArray) ? "less than or equal to" : "greater than")
        << " second array\n";

    return 0;
}