//Write program that output randomly number from 
//a) 2,4,6,8,10
//b) 3,5,7,9,11
//c) 6,20,24,28,22

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	srand(time(NULL));

	const int MAXIMUM_AMOUNT = 5;
	const int SCALE_FACTOR = 10;
	const int SCALE_FACTOR_ELEVEN = 11;
	const int FIRST_NUMBER_FOR_SERIES = 3;
	const int MINIMUM_EVEN_NUMBER = 2;

	for (int i = 1;i <= MAXIMUM_AMOUNT;i++) {	
		int evenNumbersFromTwoToTen = 1 + rand() % SCALE_FACTOR;

		if (evenNumbersFromTwoToTen % MINIMUM_EVEN_NUMBER == 0) {
			cout <<  evenNumbersFromTwoToTen <<"  ";
		}
	}

	cout << endl;
	 
	for (int i = 1;i <= MAXIMUM_AMOUNT;i++) {
		int unevenNumberTillEleven = 1 + rand() % SCALE_FACTOR_ELEVEN;s

		if (unevenNumberTillEleven >= FIRST_NUMBER_FOR_SERIES) {
			if (unevenNumberTillEleven %  MINIMUM_EVEN_NUMBER == 1) {
				cout << unevenNumberTillEleven << "  ";	
			}
		}

	}

	return 0;
}