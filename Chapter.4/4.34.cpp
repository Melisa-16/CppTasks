#include <iostream>
#include <iomanip>

using namespace std;

int binarySearch(int[], int, int, int, int);
void printHeader(int);
void printRow(int[], int, int, int, int);

int main() {
	const int ARRAY_SIZE = 15;
	int a[ARRAY_SIZE], key, result;

	for (int i = 0;i < ARRAY_SIZE;i++) {
		a[i] = 2 * i;
	}

	cout << "Enter search key from 0 to 28: ";
	cin >> key;

	printHeader(ARRAY_SIZE);

	result = binarySearch(a, key, 0, ARRAY_SIZE - 1, ARRAY_SIZE);
	if (result != -1) {
		cout << endl << key << " found in element " << result << endl;
	}
	else {
		cout << endl << key << " is not found" << endl;
	}

	return 0;
}

int binarySearch(int b[], int searchKey, int low, int high, int size) {
	int middle;

	if (low > high) {
		return -1;
	}

	middle = (low + high) / 2;

	printRow(b, low, middle, high, size);

	if (searchKey == b[middle]) {
		return middle;
	}
	else if (searchKey < b[middle]) {
		return binarySearch(b, searchKey, low, middle - 1, size);
	}
	else {
		return binarySearch(b, searchKey, middle + 1, high, size);
	}
	
}
void printHeader(int size) {
	cout << endl << "Indexes: " << endl;

	for (int i = 0;i < size;i++) {
		cout << setw(3) << i << " ";
	}
	
	cout << endl;

	for (int i = 0;i < size;i++) {
		cout << "----";
	}
	cout << endl;
}
void printRow(int b[], int low, int mid, int high, int size) {
	for (int i = 0;i < size;i++) {
		if (i < low || i > high) {
			cout << "    ";
		}
		else if (i == mid) {
			cout << setw(3) << b[i] << "*";
		}
		else {
			cout << setw(3) << b[i] << " ";
		}
	}
	cout << endl;
}