//Sort array by finding its minimum,use recursive function selectionSort

#include <iostream>

using namespace std;


void selectionSort(int[], int, int);

int main() {

	int index = 0;

	const int ARRAY_SIZE = 6;
	int unsortedArray[ARRAY_SIZE] = { 845, 23, 1567, 402, 91, 1003 };

	cout << "Unsorted array: ";

	for (int i = 0;i < ARRAY_SIZE;i++) {
		cout << unsortedArray[i] << " ";
	}
	
	selectionSort(unsortedArray, ARRAY_SIZE, index);


	cout << "\n\nSorted array: ";

	for (int i = 0;i < ARRAY_SIZE;i++) {
		cout << unsortedArray[i] << " ";
	}



	return 0;
}


void selectionSort(int array[], int arraySize , int index) {

	if (index == arraySize) {
		return;
	}

	int minimumValueIndex = index;
	int minimumValue = array[minimumValueIndex];

	for (int i = index;i < arraySize;i++) {

		if (array[i] < minimumValue) {

			minimumValueIndex = i;
			minimumValue = array[i];

		}

	}

	int temporaryPlace = array[index];
	array[index] = array[minimumValueIndex];
	array[minimumValueIndex] = temporaryPlace;

	return selectionSort(array,arraySize,index + 1);

}