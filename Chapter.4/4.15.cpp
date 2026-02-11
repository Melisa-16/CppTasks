//check if entered number is dublicated,if it is not so print it


#include <iostream>

using namespace std;

int main() {

	const int ARRAY_SIZE = 20;

	double x[ARRAY_SIZE];

	cout << "Enter element: ";
	cin >> x[0];


	for (int i = 1;i < ARRAY_SIZE;i++) {

		cout << "Enter element: ";
		cin >> x[i];

		double element = x[i];

		bool dublicatedElementAvailability = false;


		for (int j = 0;j < i;j++) {

			if (x[j] == x[i]) {

				dublicatedElementAvailability = true;
				break;

			}
		}

		if (dublicatedElementAvailability == false) {

			cout << x[i] << "\n";

		}

	}

	return 0;
}