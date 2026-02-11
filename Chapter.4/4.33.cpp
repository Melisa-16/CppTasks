//use recursive function linearsearch to find equal element in array to the entered number

#include <iostream>

using namespace std;

int linearSearch(int[], int);

int searchKey;


int main() {

	const int ARRAY_SIZE = 100;

	int a[ARRAY_SIZE];


	for (int x = 0;x < ARRAY_SIZE;x++) {

		a[x] = 2 * x;
	}

	cout << "Enter key of searching - integer number ";
	cin >> searchKey;

	int result = linearSearch(a, ARRAY_SIZE);

	if (result == -1) {
		cout << "\nKey was not found";
	}
	else {
		cout << searchKey << " was found in element " << result ;
	}


	return 0;
}

int linearSearch(int array[], int arraySize) {


	for (int i = 0;i < arraySize;i++) {
			
		if (searchKey == array[i]) {
			return i;
		}

		if (i == ( arraySize - 1 )) {
			return -1;
		}
	}

	return linearSearch(array + 1, arraySize - 1);
}