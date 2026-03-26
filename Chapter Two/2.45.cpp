//In probability theory, the factorial function is often used.
//The factorial of a positive integer n(n!) is equal to the product of
//positive integers from 1 to n.Write a program for calculating
//the factorials of integers from 1 to 5. Print
//the results in tab format.

#include <iostream>

using namespace std;

int main() {

    cout << "number"<<"\tFactorial(n)"<< endl; 

    int factorial;

    factorial = 1;

    const int MAXIMUM_NUMBER = 5;

    for (int number = 1; number <= MAXIMUM_NUMBER; number++) {

            factorial *= number;

            cout << number << "\t" << factorial << endl;

    }

    return 0;
}
