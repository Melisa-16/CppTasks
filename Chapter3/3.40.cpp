//write program that find power of inputed number.Use recursive function

#include <iostream>

using namespace std;

int power(int,int);


int main() {

	int baseNumber;
	int exponentNumber;
	int powerOfNumber;

	cout << "Enter base number: ";
	cin >> baseNumber;

	cout << "Enter exponent number: ";
	cin >> exponentNumber;

	powerOfNumber = power(baseNumber, exponentNumber);

	cout << baseNumber<<" in power of "<<exponentNumber<<" = "<<powerOfNumber;

	return 0;

}


int power(int base, int exponent) {

	if (exponent == 1) {

		return base;

	}
	else {

		return base * power(base, exponent - 1);

	}

}