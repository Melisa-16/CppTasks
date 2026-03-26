//write program that output square made with symbols

#include <iostream>

using namespace std;

void squareMadeWithSymbols(int,char);

int main() {
	int amountOfSymbols;
	char symbol;

	cout << "Enter amount of symbols: ";
	cin >> amountOfSymbols;

	cout << "Enter symbol: ";
	cin >> symbol;

	squareMadeWithSymbols(amountOfSymbols,symbol);

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