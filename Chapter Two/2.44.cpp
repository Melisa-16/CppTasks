//Write a program that counts and prints the product of non -
//even integers from 1 to 15.

#include <iostream>

using namespace std;

int main() {

    int productOfNumbers = 1;

    const int STARTING_POINT = 1;
    const int ENDING_POINT = 15;
    const int DIFFERENCE_BETWEEN_NUMBERS = 2;

    for (int i = STARTING_POINT; i <= ENDING_POINT; i += DIFFERENCE_BETWEEN_NUMBERS) {

        productOfNumbers *= i;                   
    
    }

    cout << "The product of odd numbers from 1 to 15 is: " << productOfNumbers << endl;

    return 0;
}
