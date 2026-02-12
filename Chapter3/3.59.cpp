//Write template for finding maximum from two integers.Then use it for char types and float numbers

#include <iostream>

using namespace std;

template <class T >
T maximum(T value1, T value2) {
    T max = value1;
    if (value2 > max) {
        max = value2;
    }
    return max;
}

int main() {

    int firstNumber;
    int secondNumber;

    cout << "Enter fisrt integer number: ";
    cin >> firstNumber;
    cout << "Enter second integer number: ";
    cin >> secondNumber;

    cout << "\nMax of " << firstNumber << " and " << secondNumber << " is " << maximum(firstNumber, secondNumber) << endl << endl;

    char firstChar;
    char secondChar;

    cout << "Enter first symbol: ";
    cin >> firstChar;
    cout << "Enter second symbol: ";
    cin >> secondChar;

    cout << "\nMax of '" << firstChar << "' and '" << secondChar << "' is '" << maximum(firstChar, secondChar) << "'" << endl << endl;

    float firstFloatNumber;
    float secondFloatNumber;

    cout << "Enter first floating number: ";
    cin >> firstFloatNumber;
    cout << "Enter second floating number: ";
    cin >> secondFloatNumber;

    cout << "\nMax of " << firstFloatNumber << " and " << secondFloatNumber << " is " << maximum(firstFloatNumber, secondFloatNumber) << endl;
    return 0;
}