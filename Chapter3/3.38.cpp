//write program which plays "Guess number"
//program choose number between 1 and 1000 then output
//
//      My number is between 1 and 1000
//      Can you guess it?
//      Enter yout firts guess
//
//and also should output whether inputed number is low or high from chosen number

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {

	srand(time(NULL));

	int number;
	int userInputedNumber;

	const int SCALE_FACTOR = 1000;
	
	number = 1 + rand() % SCALE_FACTOR;

	cout << "My number is between 1 and 1000\nCan you guess it?\n";
	
	cout << "Enter your first guess\n";
	cin >> userInputedNumber;


	while (userInputedNumber != number) {

		if (userInputedNumber < number) {

			cout << "Your guess is too low.\nTry again: ";
		
		}
		else {
			
			cout << "Your guess is too high.\nTry again: ";
		
		}

		cin >> userInputedNumber;
	
	}

	cout << "Cangratulations.You guessed the number";

	return 0;

}