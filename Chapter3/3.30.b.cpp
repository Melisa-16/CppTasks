//write program that output simple numbers from 1 to 10000

#include <iostream>

using namespace std;



int simpleNumberIdentifier(int);

int main() {

	int simpleNumber;

	const int MINIMUM_SIMPLE_NUMBER = 2;
	const int MAXIMUM_NUMBER = 10000;

	cout << "Simple numbers between 1 and 10000\n";

	for (int i = MINIMUM_SIMPLE_NUMBER;i <= MAXIMUM_NUMBER;i++) {

		simpleNumber = simpleNumberIdentifier(i);

		if (simpleNumber != 0) {

			cout << i << endl;
		
		}


	}

	return 0;
}

int simpleNumberIdentifier(int number) {

	const int MINIMUM_SIMPLE_NUMBER = 2;

	if (number == MINIMUM_SIMPLE_NUMBER) {

		return number;

	}

	for (int i = MINIMUM_SIMPLE_NUMBER;i < number;i++) {

		if (number % i == 0) {
			return 0;
		}

	}

	return number;

}
