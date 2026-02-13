//Write a C++ program that sorts an array of positive integers using a digit - based bucket sort.
//The program should sort the  original array using the bucketSort function, 
//and then display the sorted array.The bucketSort function sorts the numbers by each digit,
//from the least significant to the most significant,
//using temporary buckets for each digit place.

#include <iostream>

using namespace std;

void bucketSort(int[], int);

const int BLOCKS_AMOUNT = 10;
const int POSITIVE_NUMBERS_AMOUNT = 8;


int main() {

	int positiveNumbers[POSITIVE_NUMBERS_AMOUNT] = { 10,34,678,547,223,4679,302,341 };

	cout << "Initial array: \n";
	
	for (int i = 0;i < POSITIVE_NUMBERS_AMOUNT;i++) {
		cout << positiveNumbers[i] << " ";
	}

	cout << endl;

	bucketSort(positiveNumbers, POSITIVE_NUMBERS_AMOUNT);

	cout << "\nSorted array:\n";

	for (int i = 0;i < POSITIVE_NUMBERS_AMOUNT;i++) {
		cout << positiveNumbers[i] << " ";
	}
	
	cout << endl ;
	return 0;

}

void bucketSort(int array[], int arraySize) {

	int blocksArray[BLOCKS_AMOUNT][POSITIVE_NUMBERS_AMOUNT] = { 0 };

	//finding maximum number's digits amount 
	int maximumOfPositiveNumbers = 0;

	for (int i = 0;i < arraySize;i++) {
		if (array[i] > maximumOfPositiveNumbers) {
			maximumOfPositiveNumbers = array[i];
		}
	}
	int digitsAmount = 0;

	while (maximumOfPositiveNumbers > 0) {
		digitsAmount++;
		maximumOfPositiveNumbers /= 10;
	}

	//sorting array

	int digitPlace = 1;

	for (int solvingSteps = 0;solvingSteps < digitsAmount;solvingSteps++) {
		for (int i = 0;i < BLOCKS_AMOUNT;i++) {
			for (int j = 0;j < arraySize;j++) {
				blocksArray[i][j] = 0;
			}
		}
		for (int j = 0;j < arraySize;j++) {
			int digit = (array[j] / digitPlace) % 10;
			blocksArray[digit][j] = array[j];
		}

		int sortedArrayIndex = 0;

		for (int i = 0;i < BLOCKS_AMOUNT;i++) {
			for (int j = 0;j < arraySize;j++) {
				if (blocksArray[i][j] != 0) {
					array[sortedArrayIndex] = blocksArray[i][j];
					sortedArrayIndex++;
				}
			}
		}
		digitPlace *= 10;
	}
}