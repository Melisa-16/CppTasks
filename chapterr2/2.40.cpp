//Write a program that summarizes a sequence
//of integers.Assume that the first integer you read indicates
//the number of integers that will be entered next.Your
//program should read only one value at
//a time in the input statement.A typical input sequence may look like
//5, 100, 200, 300, 400, 500,
// where 5 indicates that 5 numbers will be entered,
//which must be summed.

#include <iostream>

using namespace std;

int main() {

    int firstNumber;
    int sum;
    int nextNumber;

    sum = 0;

    cout << "Enter first number (also number of following inputs): ";
    cin >> firstNumber;

    for (int i = 1; i <= firstNumber; i++) {

        cout << "Enter next number: ";
        cin >> nextNumber;

        sum += nextNumber;

    }

    cout << "Total sum = " << sum << "\n";

    return 0;
}