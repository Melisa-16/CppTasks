//check if entered number is dublicated,if it is not so print it

#include <iostream>

using namespace std;

void dublicatedElementFinder(double[], int);

int main() {
	const int ARRAY_SIZE = 20;

	double x[ARRAY_SIZE];

	dublicatedElementFinder(x, ARRAY_SIZE);
	return 0;
}

void dublicatedElementFinder(double array[], int arraySize) {
	cout << "Enter element: ";
	cin >> array[0];

	for (int i = 1;i < arraySize;i++) {
		cout << "Enter element: ";
		cin >> array[i];

		double element = array[i];

		bool dublicatedElementAvailability = false;

		for (int j = 0;j < i;j++) {
			if (array[j] == array[i]) {
				dublicatedElementAvailability = true;
				break;
			}
		}
		if (dublicatedElementAvailability == false) {
			cout << array[i] << "\n";
		}
	}
}