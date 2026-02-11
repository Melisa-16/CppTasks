//Write function that find power of inputed number

#include <iostream>

using namespace std;

int integerPower(int, int);

int main() {

	int baseNumber;
	int powerOfNumber;

	cout << "Enter base number: ";
	cin >> baseNumber;

	cout << "Enter power of inputed number: ";
	cin >> powerOfNumber;

	cout << baseNumber << " in power of " << powerOfNumber <<" = "<< integerPower(baseNumber, powerOfNumber);

	return  0;

}

int integerPower(int base, int exponent) {

	int powerOfNumber = 1;

	for (int i = 1;i <= exponent;i++) {

		powerOfNumber *= base;

	}

	return powerOfNumber;
}