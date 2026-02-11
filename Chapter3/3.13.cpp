// write program that calculate y = floor(x+0.5) for 1-5

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double number;

	const int MAXIMUM_ENTERED_NUMBERS_AMOUNT = 5;
	const double ADDING_NUMBER = .5;

	for (int i = 1;i <= MAXIMUM_ENTERED_NUMBERS_AMOUNT;i++) {

		cout << "Enter number: ";
		cin >> number;

		double y = floor(number + ADDING_NUMBER);

		cout << number<< " rounded to nearest integer not equal to " << number << " is " << y << endl;

	}

	return 0;
}