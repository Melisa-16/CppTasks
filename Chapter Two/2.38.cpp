//The factorial of a non - negative integer n is written as n!(pronounced "en factorial") and is defined as follows :
//
//n!= n ×(n - 1) ×(n - 2) × ... × 1 (for values of n greater than or equal to 1)
//n!= 1 (for n = 0)
//
//For example, 5!= 5 × 4 × 3 × 2 × 1 = 120.

//a) Write a program that reads a non - negative integer,
//reads and prints its factorial.
//
//b) Write a program that approximately calculates the value
//of the mathematical constant e using the formula :
//
//          e = 1 + 1 / 1!+ 1 / 2!+ 1 / 3!+ ... 1/n! 
//c) Write a program that calculates the value of eˣ using the formula :
//          e^x = 1 + x / 1! + x^2 / 2! + x^3 / 3! + .... x^n / n! 


#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number < 0) {

        cout << "Factorial is not defined for negative numbers.";
    
    }
    else if (number == 0) {

        cout << "0! = 1";
    
    }
    else {
        int factorial = 1;

        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }
        
        cout << number << "! = " << factorial << "\n";
    }

    cout << "Enter number: ";
    cin >> number;

    double eurelsNumber = 1;

    double factorialForENumber = 1;

    for (int i = 1; i <= number; i++) {

        factorialForENumber *= i;
        eurelsNumber += 1.0 / factorialForENumber;
    
    }

    cout << "e = " << eurelsNumber << " when n equals to " << number << "\n";



    cout << "Enter number: ";
    cin >> number;

    double  powerOfE;
    double  exponentialFunction;
    double  factorialForExponentialFunction;

    exponentialFunction = 1;
    factorialForExponentialFunction = 1;

    cout << "Enter power of e: ";
    cin >> powerOfE;

    for (int i = 1; i <= number; i++) {

        factorialForExponentialFunction *= i;

        exponentialFunction += pow(powerOfE, i)/factorialForExponentialFunction;
    
    }

    cout << "e^x = " << exponentialFunction << " when n equals to " << number ;
    
    return 0;

}