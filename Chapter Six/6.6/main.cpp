#include <iostream>
#include "complex.h"

using namespace std;

int main() {
	Complex firstComplexNumber(3, 4);
	Complex secondComplexNumber(5, 6);

	cout << "First Complex Number: ";
	firstComplexNumber.print();

	cout << "\nSecond Complex Number: ";
	secondComplexNumber.print();

	cout << endl;

	Complex resultAdd = firstComplexNumber.adding(secondComplexNumber);
	cout << "Adding: ";
	resultAdd.print();

	cout << endl;

	Complex resultSub = firstComplexNumber.substraction(secondComplexNumber);
	cout << "Substraction: ";
	resultSub.print();

	return 0;
}