//Write a program that reads three nonzero integers,
//determines and prints whether they can represent the sides of a right -
//angled triangle.

#include <iostream>

using namespace std;

int main() {

    int firstNumber;
    int secondNumber;
    int thirdNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;
    
    cout << "Enter third number: ";
    cin >> thirdNumber;

    if (firstNumber > 0 && secondNumber > 0 && thirdNumber > 0) {

            if ( (firstNumber * firstNumber == secondNumber * secondNumber + thirdNumber * thirdNumber) || 
                 (secondNumber * secondNumber == firstNumber * firstNumber + thirdNumber * thirdNumber) ||
                 (thirdNumber * thirdNumber == firstNumber * firstNumber + secondNumber * secondNumber) ) {

                   cout << "You can create a right-angle triangle with these numbers.\n";
        
            }
            else
            {
                  cout << "You can't create a right-angle triangle.\n";
            }

    }
    else 
    {
        cout << "At least one number was zero or negative.\n";
    }

    return 0;
}
