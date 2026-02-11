#include <iostream>

using namespace std;

int main() {
	int number = 1;

	const int INTERRUPTING_NUMBER = 5;
	const int MAXIMUM_NUMBER = 10;

	//without break

	do {
		
		cout << number << " ";
		number++;

	} while (number != INTERRUPTING_NUMBER);

	cout << endl;

	//using break

	for (number = 1; number <= MAXIMUM_NUMBER; number ++) {

		if (number == INTERRUPTING_NUMBER) {
			break;
		}

		cout << number << " ";
	}
	
	cout << endl << "Loop interrupted when x == " << number << endl;

	return 0;
}   