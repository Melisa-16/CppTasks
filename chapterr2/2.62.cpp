#include <iostream>

using namespace std;

int main() {

	int number;

	const int MAXIMUM = 10;
	const int SKIPPING_PRINTING_VALUE = 5;

	//without continue
	
	for (int number = 1; number <= MAXIMUM; number ++) {

		if (number != SKIPPING_PRINTING_VALUE) { 

			cout << number << " ";
		
		}
	
	}
	
	cout << endl;
	
	//using continue

	for (number = 1; number <= MAXIMUM;number++) {

		if (number == SKIPPING_PRINTING_VALUE) {
			continue;
		}

		cout << number << " ";
	
	}
	
	cout << endl << "Loop skip printing when x == 5"  << endl;
	return 0;
}