//use recursive function linearsearch to find equal element in array to the entered number

#include <iostream>

using namespace std;

int linearSearch(int[], int, int);

int searchKey;

int main() {

	const int ARRAY_SIZE = 100;

	int a[ARRAY_SIZE];

	for (int x = 0;x < ARRAY_SIZE;x++) {
		a[x] = 2 * x;
	}

	cout << "Enter search key(integer number): ";
	cin >> searchKey;

	int index = 0;
	int result = linearSearch(a, ARRAY_SIZE, index);

	if (result == -1) {
		cout << "\nKey was not found";
	}
	else {
		cout << searchKey << " was found in element " << result;
	}
	return 0;
}

int linearSearch(int array[], int arraySize, int index) {
	if (searchKey == array[index]) {
		return index;
	}

	if (index == (arraySize - 1)) {
		return -1;
	}
	return linearSearch(array, arraySize, index + 1);
}