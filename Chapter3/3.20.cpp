//write program that checks if second inputed number is multiple to first inputed number

#include <iostream>

using namespace std;

bool multiple(int, int);


int main() {
    int firstNumber;
    int secondNumber;

    cout << "Enter two numbers,to know if the second number  is multiple of first(1 is multiple,0 is not multiple)\n\n";

    cout<< "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber; 

    bool answer = multiple(firstNumber, secondNumber);
    cout << "\nAnswer: " << answer<<endl<<endl;

    return 0;
}

bool multiple(int firstNumber, int secondNumber) {

    if (secondNumber % firstNumber == 0) {
        return true;
    }
    else {
        return false;
    }

}