//0remake 3.38 so that player has 10 chance to guess
//ih he guess it till 10 guessing were inputed so program output 'You either know the secret or you are lucky'
// if it is 10: 'Oh.You know the secret
// if it is more than 10 :'You need to improve your skills' 

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	const int SCALE_FACTOR = 1000;
	const int MAXIMUM_CHANCES_TO_GUESS = 10;

	int number;
	number = 1 + rand() % SCALE_FACTOR;

	int userInputedNumber;

	cout << "My number is between 1 and 1000\nCan you guess it?\n";
	cout << "Enter your first guess\n";
	cin >> userInputedNumber;

	int guessingAmounts = 1;

	while (userInputedNumber != number && guessingAmounts < MAXIMUM_CHANCES_TO_GUESS) {
		if (userInputedNumber < number) {		
			cout << "Your guess is too low.\nTry again: ";
		}
		else {
			cout << "Your guess is too high.\nTry again: ";
		}
		cin >> userInputedNumber;
		guessingAmounts++;
	}

	if (guessingAmounts < MAXIMUM_CHANCES_TO_GUESS) {
		cout << "You either know the secret or you are lucky.\n";
	}
	else if (guessingAmounts == MAXIMUM_CHANCES_TO_GUESS && number == userInputedNumber) {
		cout << "Oh! You know the secret.\n";
	}
	else {
		cout << "You need to improve your skills.\nNumber was "<<number;
	}

	return 0;
}
