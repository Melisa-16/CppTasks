//One of the interesting applications of computers is drawing
//diagrams and histograms.Write a program that reads five
//numbers(each between 1 and 30).For each calculated number
// your program should print a string containing the corresponding
//structures the corresponding number of adjacent asterisks.For example, if your program
//reads the number 7, it should print  *******

#include <iostream>

using namespace std;

int main() {

    int numberOfAsterisk;
    int count;
    
    count = 1;

    const int MAXIMUM_INPUTS = 5;
    const int MINIMUM_AMOUNT_OF_ASTERISKS = 1;
    const int MAXIMUM_NUMBER_Of_ASTERISKS = 30;

    while (count <= MAXIMUM_INPUTS) {

        cout << "Enter number: ";
        cin >> numberOfAsterisk;

        if ( (numberOfAsterisk >= MINIMUM_AMOUNT_OF_ASTERISKS) && (numberOfAsterisk <= MAXIMUM_NUMBER_Of_ASTERISKS) ) {

            for (int i = 1; i <= numberOfAsterisk; i++) {

                cout << "*";
            
            }

            cout << endl;
            
            count++;

        }
        else {

            cout << "Number must be between 1 and 30\n";
        
        }
    }

    return 0;
}