
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //a
	const int ARRAY_SIZE = 10;

	int array[ARRAY_SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int hold;

	cout << "Elements in initial turn \n";

	for (int i = 0;i < ARRAY_SIZE;i++) {
		cout << setw(4) << a[i];
	}
	for (int pass = 1;pass < ARRAY_SIZE;pass++) {
		for (int i = 0;i < ARRAY_SIZE - pass;i++) {
			if (array[i] > array[i + 1]) {
				hold = array[i];
				array[i] = array[i + 1];
				array[i + 1] = hold ;
			}
		}
	}

	cout << "\nElemts in ascending order\n";

	for (int i = 0;i < ARRAY_SIZE;i++) {
		cout << setw(4) << array[i];
	}
	cout << endl;

	return 0;
}