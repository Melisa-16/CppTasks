//Write template for finding minimum from two integers.Then use it for char types and float numbers

#include <iostream>

using namespace std;

template <class T >
T minimum(T value1, T value2) {
    T min = value1;
    if (value2 < min) {
        min = value2;
    }
    return min;
}

int main() {

    int firstNumber;
    int secondNumber;

    cout << "Enter fisrt integer number: ";
    cin >> firstNumber;
    cout << "Enter second integer number: ";
    cin >> secondNumber;

    cout << "\nMin of " << firstNumber << " and " << secondNumber << " is " << minimum(firstNumber, secondNumber) << endl << endl;

    char firstChar;
    char secondChar;

    cout << "Enter first symbol: ";
    cin >> firstChar;
    cout << "Enter second symbol: ";
    cin >> secondChar;

    cout << "\nMin of '" << firstChar << "' and '" << secondChar << "' is '" << minimum(firstChar, secondChar) << "'" << endl << endl;

    float firstFloatNumber;
    float secondFloatNumber;

    cout << "Enter first floating number: ";
    cin >> firstFloatNumber;
    cout << "Enter second floating number: ";
    cin >> secondFloatNumber;

    cout << "\nMin of " << firstFloatNumber << " and " << secondFloatNumber << " is " << minimum(firstFloatNumber, secondFloatNumber) << endl;

    return 0;
}
