//1) Create an array, all elements of which have initial values
//of 1 (true).The array elements with simple indexes remain
//equal to 1. All other elements of the array will eventually
//be set to zero.

#include <iostream>

using namespace std;

int main() {

	const int ARRAY_SIZE = 1000;
	const int MINIMUM_SIMPLE_NUMBER = 2;

	int array[ARRAY_SIZE] ;

	for (int i = 0;i < ARRAY_SIZE;i++) {
		array[i] = 1;
	}

	for (int i = 1;i < ARRAY_SIZE;i++) {

		for (int j = ARRAY_SIZE;j < i;j++) {
			if (i % j == 0) {
				array[i] = 0;
			}
		}
	}


	for (int i = 1;i < ARRAY_SIZE;i++) {
		cout << array[i] << " ";
	}

	return 0;
}