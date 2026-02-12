//write program that check if number is even or not

#include <iostream>

using namespace std;

bool evenNumberChecker(int); 


int main(){
	int number;

	cout << "Enter number to check if it is even or odd(1 - even, 0 - odd)"
		<< "\nEnter number: ";
	cin >> number;

	bool answer;
	answer = evenNumberChecker(number);

	cout << "\nAnswer: " << answer;

	return 0;
}

bool evenNumberChecker(int number) {
	if (number % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}