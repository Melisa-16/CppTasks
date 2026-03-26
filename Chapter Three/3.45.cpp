// use recursive function for finding greater divisor for two integer numbers.
// if second number is 0  return first number
// if it's not return same funstion but second parameter is (firstNumber % secondNumber)

#include <iostream>

using namespace std;

int greatesDivisorFinder(int,int);

int main() {

	int firstInteger;
	int secondInteger;

	cout << "Enter fisrt integer number: ";
	cin >> firstInteger;
	cout << "Enter second integer number: ";
	cin >> secondInteger;

	int theGreatestCommonDivisor;
	theGreatestCommonDivisor = greatesDivisorFinder(firstInteger, secondInteger);

	cout <<"The Greatest Common divisor: "<< theGreatestCommonDivisor;

	return 0;
}

int greatesDivisorFinder(int firstNumber, int secondNumber) {
	if (secondNumber == 0) {
		return firstNumber;
	}
	else {
		return greatesDivisorFinder(secondNumber, firstNumber % secondNumber);
	}
}