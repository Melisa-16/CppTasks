//2) Starting from array index 2 (index 1 should be simple),
//each time an array element with a single value is searched
//, the remaining part of the array is cyclically processed and each
//array element whose index is a multiple of the index
//of the element with a single value is set to zero.For index 2, all elements in
//the array with an index greater than 2 and multiples of 2 will be set equal
//to zero(indexes 4, 6, 8, and the like); for index 3, all
//elements with an index greater than 3 and multiples of 3 will be set equal
//to zero(indexes 6, 9, 12, and the like) and etc.

#include <iostream>

using namespace std;

int main() {

	const int ARRAY_SIZE = 1000;
	const int MINIMUM_SIMPLE_NUMBER = 2;


	int array[1000];

	for (int i = 0;i < ARRAY_SIZE;i++) {
		array[i] = 1;
	}

	for (int i = MINIMUM_SIMPLE_NUMBER;i < ARRAY_SIZE;i++) {

		if (array[i] == 1) {

			for (int j = i + 1;j < ARRAY_SIZE;j++) {
				if (j % i == 0) {
					array[j] = 0;
				}
			}
		}

	}


	for (int i = 1;i < ARRAY_SIZE;i++) {
		cout << array[i] << " ";
	}

	return 0;
}