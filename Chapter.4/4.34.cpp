//print array using resursion 

#include <iostream>

using namespace std;

void printArray(int[], int);

int main() {

	const int ARRAY_SIZE = 6;
	int array[ARRAY_SIZE] = { 1,2,3,4,5,6 };

	printArray(array,ARRAY_SIZE);

	return 0;
}

void printArray(int array[], int arraySize) {

	if (arraySize == 0) {
		return;
	}

	cout << array[0]<<" ";

	return printArray(array + 1,arraySize - 1);

}