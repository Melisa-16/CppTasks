//write function for finding simple numbers between 1 and 10000 but the last checking number must be number/2 and even square root of n

#include <iostream>
#include <cmath>

using namespace std;

const int MINIMUM_SIMPLE_NUMBER = 2;

int divisionMethod(int);

int squareRootMethod(int);

int main() {

	int simpleNumberByDivision;
	int simpleNumberBySquareRoot;

	const int MAXIMUM_NUMBER = 10000;

	cout << "Simple numbers between 1 and 10000\n\n";

	cout << "Using division\n\n" ;

	for (int i = MINIMUM_SIMPLE_NUMBER;i <= MAXIMUM_NUMBER;i++) {

		simpleNumberByDivision = divisionMethod(i);
		
		
		if (simpleNumberByDivision != 0) {
			cout << i << endl;
		}
	}

	cout << endl << endl<<"Using Square Root\n\n";
	

	for (int i = MINIMUM_SIMPLE_NUMBER;i <= MAXIMUM_NUMBER;i++) {

		simpleNumberBySquareRoot = squareRootMethod(i);


		if (simpleNumberBySquareRoot != 0) {
			cout << i << endl;
		}
	}


	return 0;
}

int divisionMethod(int number) {

	if (number == MINIMUM_SIMPLE_NUMBER) {

		return number;

	}

	for (int i = MINIMUM_SIMPLE_NUMBER;i <= number / 2;i++) {

		if (number % i == 0) {
			return 0;
		}

	}

	return number;

}

int squareRootMethod(int number) {

	if (number == MINIMUM_SIMPLE_NUMBER) {

		return number;

	}

	for (int i = MINIMUM_SIMPLE_NUMBER;i <= sqrt(number);i++) {

		if (number % i == 0) {
			return 0;
		}

	}

	return number;

}