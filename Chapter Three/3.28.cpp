//write function that find smallest from 3 float numbers

#include <iostream>

using namespace std;

float minimumNumber(float,float,float);

int main() {
	float firstNumber;
	float secondNumber;
	float thirdNumber;

	cout << "Enter first float number: ";
	cin >> firstNumber;
	cout << "Enter second float number: ";
	cin >> secondNumber;
	cout << "Enter third float number: ";
	cin >> thirdNumber;

	float minimumValue = minimumNumber(firstNumber, secondNumber, thirdNumber);
	cout << endl << "Minimum number from three float numbers is " << minimumValue;

	return 0;
}

float minimumNumber(float firstNumber, float secondNumber, float thirdNumber) {
	double minimum;

	if (firstNumber < secondNumber) {
		minimum = firstNumber;
	}
	else if(secondNumber < thirdNumber) {
		minimum = secondNumber;
	}
	else {
		minimum = thirdNumber;
	}

	return minimum;
}
