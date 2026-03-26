//In many computer applications, finding the maximum number(i.e., the largest of a given set of numbers) 
// is often used.For example, a program that determines the winner of a sales contest should input the 
//sales volumes of each salesperson.
//The one with the highest sales volume is the winner.
//Write pseudocode for a program, and then write the actual C++ program that :
//Inputs 10 numbers sequentially,Determines the largest of them, and prints its value.
//Hint: Your program should use the following three variables :
//counter: counts up to 10 (to keep track of how many numbers have been entered and determine when all 10 numbers have been input).
//number : the currently entered number.
//largest : the largest number found so far.

#include <iostream>

using namespace std;

int main() {

    double number;
    double largest;
    
    const int TOTAL_AMOUNT_OF_SALES = 10;

    cout << "Enter sales volume: ";
    cin >> number;

    largest = number;



    for (int counter = 1;counter < TOTAL_AMOUNT_OF_SALES ;counter++) {

        cout << "Enter sales volume: ";
        cin >> number;

        if (number > largest) {
            largest = number;
        }
    }

    cout << "Largest sales volume: " << largest;

    return 0;
}