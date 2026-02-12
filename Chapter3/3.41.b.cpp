//rewrite 3.41a for double type of data

#include <iostream>

using namespace std;

int main() {
	double maximumAmount;

	cout << "Enter amount for fibonacci numbers: ";
	cin >> maximumAmount;

	int firstFibonacciNumber = 0;
	int secondFibonacciNumber = 1;

	cout << firstFibonacciNumber << "\n" << secondFibonacciNumber << "\n";

	for (double number = 3;number <= maximumAmount;number++) {

		double fibonacciNumber;
		fibonacciNumber = firstFibonacciNumber + secondFibonacciNumber;
		cout << fibonacciNumber << "\n";

		firstFibonacciNumber = secondFibonacciNumber;
		secondFibonacciNumber = fibonacciNumber;
	}

	return 0;
}