#include <iostream>

using namespace std;

int main() {
	int number;

	cout << "Enter integer number: ";
	cin >> number;

	int copyOfEnteredNumber = number;
	int digitsAmount = 0;

	while (copyOfEnteredNumber > 0) {
		digitsAmount++;
		copyOfEnteredNumber /= 10;
	}

	cout << "Reversed number: ";

	for (int i = 0;i < digitsAmount;i++) {

		int reversedDigit = number % 10;
		number /= 10;

		cout << reversedDigit;
	}

	return 0;
}