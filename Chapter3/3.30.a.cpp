//number is called simple if its multipiers are 1 and that number 
//for example 7 is simple cause its multipliers are 1 and 7 
//write function that find if number is simple 

#include <iostream>

using namespace std;

int simpleNumberIdentifier(int);

int main() {

	int number;
	cout << "Enter positive integer number: ";
	cin >> number;

	int simpleNumber;
	simpleNumber = simpleNumberIdentifier(number);
	
	if (simpleNumber == 0) {
		cout << "\nEntered number is not simple\n";
	}
	else {	
		cout << "\nEntered number is simple\n";
	}

	return 0;
}

int simpleNumberIdentifier(int number) {
	const int MINIMUM_SIMPLE_NUMBER = 2;

	if (number == MINIMUM_SIMPLE_NUMBER) {
		return number;
	}
	for (int i = MINIMUM_SIMPLE_NUMBER; i < number;i++) {
		if (number % i == 0) {
			return 0;
		}
	}
	return number;
}