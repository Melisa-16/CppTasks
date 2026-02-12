//write function frlip for game 'heads and tails' for 100 throws
//function must return o for heads and 1 for tails

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

bool flip();

int main() {
	const int MAXIMUM_THROWS_AMOUNT = 100;
	const int NUMBER_FOR_HEADS = 0;

	srand(time(NULL));

	for (int i = 1;i <= MAXIMUM_THROWS_AMOUNT;i++) {
		int randomNumber = flip();
		
		if (randomNumber == NUMBER_FOR_HEADS) {
			cout << "Heads\n";
		}
		else {
			cout << "Tails\n";
		}
	}
	return 0;
}

bool flip() {
	const int DIVISION_BASE = 2;

	int randomNumber;
	randomNumber = rand() % DIVISION_BASE;

	return randomNumber;
}
