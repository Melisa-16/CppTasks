//Write a program that prints a table of binary, octal,
//and hexadecimal equivalents of decimal numbers in
//the range from 1 to 256.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << "Decimal" << setw(20) << "Binary" << setw(21)
        << "Octal" << setw(21)<< endl;

    const int MAXIMUM_NUMBER = 256;

    for (int i = 1; i <= MAXIMUM_NUMBER; i++) {

        int decimalNumber = i;

        int binaryNumber ;
        int digit ;

        binaryNumber = 0;
        digit = 1;

        const int NUMBER_SYSTEM_BASE_BINARY = 2;
        const int NUMBER_SYSTEM_BASE_OCTAL = 8;
        const int NEXT_DIGIT_PLACE_IN_NUMBER = 10;


        while (decimalNumber > 0) {

            int number = decimalNumber % NUMBER_SYSTEM_BASE_BINARY;
            binaryNumber = binaryNumber + number * digit;
            decimalNumber = decimalNumber / NUMBER_SYSTEM_BASE_BINARY;
            digit *= NEXT_DIGIT_PLACE_IN_NUMBER;

        }



        decimalNumber= i;
        int octalNumber;
        
        digit = 1;
        octalNumber = 0;

        while (decimalNumber > 0) {

            int number = decimalNumber % NUMBER_SYSTEM_BASE_OCTAL;
            octalNumber = octalNumber + number * digit;
            decimalNumber = decimalNumber / NUMBER_SYSTEM_BASE_OCTAL;
            digit *= NEXT_DIGIT_PLACE_IN_NUMBER;

        }

        

        cout << setw(3) << i
            << setw(21) << binaryNumber
            << setw(21) << octalNumber
            << endl;
    }

    return 0;
}
