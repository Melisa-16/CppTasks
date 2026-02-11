//write function that output square by asterisks

#include <iostream>

using namespace std;


void squareMadeWithAsterisks(int);

int main() {

	int amountOfAsterisks;

	cout << "Enter amount of asterisks: ";
	cin >> amountOfAsterisks;

	squareMadeWithAsterisks(amountOfAsterisks);

	return 0;
}

void squareMadeWithAsterisks(int amountOfAsterisks) {

	for (int i = 1;i <= amountOfAsterisks;i++) {

		for (int j = 1;j <= amountOfAsterisks;j++) {

			cout << "* ";

		}
		cout << endl;
	}
}