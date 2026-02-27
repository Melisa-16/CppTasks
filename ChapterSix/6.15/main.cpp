#include <iostream>
#include "HugeInteger.h"

using namespace std;

int main() {

    HugeInteger firstArray;
    HugeInteger secondArray;

    cout << "Enter first huge integer:\n";
    firstArray.inputHugeInteger();

    cout << "Enter second huge integer:\n";
    secondArray.inputHugeInteger();

    cout << "\nFirst array: ";
    firstArray.outputHugeInteger();

    cout << "\nSecond array: ";
    secondArray.outputHugeInteger();

    cout << "\n\nComparisons:\n";

    cout << "First array is "
        << ((firstArray.isEqualTo(secondArray) == 1) ? "equal to" : "not equal to")
        << " second array\n";

    cout << "First array is "
        << ((firstArray.isNotEqualTo(secondArray) == 1) ? "not equal to" : "equal to")
        << " second array\n";

    cout << "First array is "
        << ((firstArray.isGreaterThan(secondArray) == 1) ? "greater than" : "not greater than")
        << " second array\n";

    cout << "First array is "
        << ((firstArray.isLessThan(secondArray) == 1) ? "less than" : "not less than")
        << " second array\n";

    cout << "First array is "
        << ((firstArray.isGreaterThanOrEqualTo(secondArray) == 1) ? "greater than or equal to" : "less than")
        << " second array\n";

    cout << "First array is "
        << ((firstArray.isLessThanOrEqualTo(secondArray) == 1) ? "less than or equal to" : "greater than")
        << " second array\n";

    return 0;
}