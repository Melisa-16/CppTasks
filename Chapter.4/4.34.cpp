//print array using resursion 

#include <iostream>

using namespace std;

void printArray(int[], int);

int main() {

	const int ARRAY_SIZE = 6;
	int array[ARRAY_SIZE] = { 1,2,3,4,5,6 };

<<<<<<< HEAD
	printArray(array, ARRAY_SIZE);

=======
	printArray(array,ARRAY_SIZE);
>>>>>>> d7ca4f6c465c5535d4fad71f5840232469884e47
	return 0;
}

void printArray(int array[], int arraySize) {
	if (arraySize == 0) {
		return;
	}
<<<<<<< HEAD

	cout << array[0] << " ";

	return printArray(array + 1, arraySize - 1);
}
=======
	cout << array[0]<<" ";
	return printArray(array + 1,arraySize - 1);
}
>>>>>>> d7ca4f6c465c5535d4fad71f5840232469884e47
