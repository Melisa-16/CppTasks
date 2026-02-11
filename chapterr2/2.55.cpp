//(Pythagorean Triples) A right triangle can have all
//sides expressed in integers.The set of triples of integer
//values of the sides of a right triangle is called triples
//Pythagoras.These three sides must satisfy the ratio
//according to which the sum of the squares of the two sides(cathetus) is equal to the square
//of the third side(hypotenuse).Find all Pythagorean triples, in
//which both the cathetuses and the hypotenuse are no more than 500. Use three
//times nested for loops that iterate through all the possibilities.This
//is an example of a head - on calculation that boils down to iteration.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int MAXIMUM_VALUE = 500;

    int firstNumber;
    int secondNumber;
    int thirdNumber;


    cout << "           Pythagorean triples" << endl << endl
        << setw(3) << "First Number" << setw(15) << "Second Number" << setw(15) << "Third Number" << endl
        << endl;

    for (firstNumber = 1; firstNumber <= MAXIMUM_VALUE; firstNumber++) {

        for (secondNumber = 1; secondNumber <= MAXIMUM_VALUE; secondNumber++) {

            for (thirdNumber = 1; thirdNumber <= MAXIMUM_VALUE; thirdNumber++) {

                if ( (firstNumber * firstNumber + secondNumber * secondNumber) == thirdNumber * thirdNumber) {

                    cout << setw(3) << firstNumber << setw(15)
                        << secondNumber << setw(15)
                        << thirdNumber << setw(15) << endl;

                }
            }
        }
    }

    return 0;
}