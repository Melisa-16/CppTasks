//A palindrome is a number or text that reads equally from left
//to right and from right to left.For example, each of the following five -
//digit integers is a palindrome : 12321, 55555, 45554
//and 11611. Write a program that reads five - digit integers
//and determines if they are palindromes

#include <iostream>

using namespace std;

int main() {

	int checkingNumber;
	int number;
	int digit;
	int reversedNumber = 0;

	const int DIGIT_CHANGER = 10;

	cout << "Enter number to check if it is polindrome or not: ";
	cin >> checkingNumber;

	number = checkingNumber;


	while (number != 0) {

		digit = number % 10;

		reversedNumber = reversedNumber * DIGIT_CHANGER + digit;

		number /= 10;
	}

	if (checkingNumber == reversedNumber) {
		cout << "Number is polindrome\n";
	}
	else {
		cout << "Number is not polindrome";
	}

	return 0;
}