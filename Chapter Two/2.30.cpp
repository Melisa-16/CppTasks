//Enter integers containing only zeros and ones(i.e.
//"binary" integers), and print their decimal equivalent.
//In the decimal system, the rightmost digit has a positional value
//of 1, the next digit on the left has a positional value of 10,
//then 100, then 1000, etc.; in the binary number system, the rightmost
//the digit has a positional value of 1, the next digit on the left has
//a positional value of 2, then 4, then 8, etc.
//the decimal number 234 can be represented as 4 * 1 + 3 * 10 +
//2 * 100. The decimal equivalent of binary 1101 is 1 * 1 +
//0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.)

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int binaryNumber;
    int decimalNumber;
    int powerOfTwo;
    int binary;

    cout << "Enter binary integer: ";
    cin >> binaryNumber;

    if (binaryNumber == 1 || binaryNumber == 0) {

            cout << "Decimal equivalent: " << binaryNumber << endl;

    }

    else {

        binary = binaryNumber;

        while (binary != 0) {

            if ((binary % 10) == 1 || (binary % 10) == 0) {

                binary /= 10;

            }

            else {

                cout << "Please enter a binary number (only 0s and 1s).\n";
                cin >> binaryNumber;

                binary = binaryNumber;

            }

        }

        decimalNumber = 0;
        powerOfTwo = 0;

        while (binaryNumber != 0) {

            int last = binaryNumber % 10;

            decimalNumber += last * pow(2, powerOfTwo);
            binaryNumber /= 10;

            powerOfTwo++;

        }

        cout << "Decimal equivalent: " << decimalNumber << endl;

    }

    return 0;
}