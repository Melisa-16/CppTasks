#include <iostream>

using namespace std;

void stringReverse(char[]);

int main() {

	char text[] = "gnirts desreveR";
	stringReverse(text);

	return 0;
}

void stringReverse(char array[]) {
	if (array[0] == '\0') {
		return;
	}

	stringReverse(array + 1);
	cout << array[0];
}