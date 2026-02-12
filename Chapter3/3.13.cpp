// write program that calculate y = floor(x+0.5) 

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	const int MAXIMUM_ENTERED_NUMBERS_AMOUNT = 5;
	const double ADDING_NUMBER = 0.5;

	double number;

	for (int i = 1;i <= MAXIMUM_ENTERED_NUMBERS_AMOUNT;i++) {
		cout << "Enter number: ";
		cin >> number;

		double y = floor(number + ADDING_NUMBER);

		cout << number << " rounded to nearest integer is " << y << endl;
	}

	return 0;
}