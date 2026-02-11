//write program that output square,right-angle triangle and rectangle

#include <iostream>

using namespace std;

void squareMadeWithSymbols(int,char);

void rectangleMadeWithSymbols(int,char);

void rightAngleTriangleMadeWithSymbols(int,char);

int main() {


	int amountOfSymbols;
	char symbol;

	cout << "Enter amount of symbols: ";
	cin >> amountOfSymbols;

	cout << "Enter symbol: ";
	cin >> symbol;

	squareMadeWithSymbols(amountOfSymbols,symbol);

	cout << endl << endl;

	rectangleMadeWithSymbols(amountOfSymbols,symbol);

	cout << endl << endl;

	rightAngleTriangleMadeWithSymbols(amountOfSymbols,symbol);

	return 0;

}

void squareMadeWithSymbols(int amountOfSymbols,char symbol) {

	for (int i = 1;i <= amountOfSymbols;i++) {

		for (int j = 1;j <= amountOfSymbols;j++) {

			cout << symbol << " ";

		}
		cout << endl;
	}

}

void rectangleMadeWithSymbols(int amountOfSymbols, char symbol) {

	for (int i = 1;i <= amountOfSymbols;i++) {

		for (int j = 1;j <= amountOfSymbols - 1;j++) {

			cout << symbol << " ";

		}
		cout << endl;
	}
}

void rightAngleTriangleMadeWithSymbols(int amountOfSymbols, char symbol) {

	for (int i = 1;i <= amountOfSymbols;i++) {

		for (int j = 1;j <= amountOfSymbols;j++) {

			if (j <= i) {
				cout << symbol << " ";
			}

		}

		cout << endl;

	}

}