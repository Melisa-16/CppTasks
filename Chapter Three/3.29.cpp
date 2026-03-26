//An integer is said to be a perfect number if its
//multipliers, including 1 (but not the number itself), add up to this number.
//For example, 6 is a perfect number, since 6 = 1 + 2 + 3 .
//Write program that find perfect numbers between 1 and 1000
//(use perfect function and number parameter)

#include <iostream>

using namespace std;

int perfect(int);

int main() {
    const int MAXIMUM_VALUE = 1000;

    for (int checkingNumbers = 1; checkingNumbers <= MAXIMUM_VALUE; checkingNumbers++) {
        int perfectNumber = perfect(checkingNumbers);

        if (perfectNumber != 0) {
            cout << perfectNumber << endl;
        }
    }
    return 0;
}

int perfect(int number) {
    int perfectNumber;
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    if (sum == number) {
        perfectNumber = number;
    }
    else {
        perfectNumber = 0;
    }

    return perfectNumber;
}

