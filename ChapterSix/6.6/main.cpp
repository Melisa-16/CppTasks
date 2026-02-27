#include <iostream>
#include "complex.h"

using namespace std;

int main() {

	complex firstComplexNumber(3, 4);
	complex secondComplexNumber(5, 6);

	cout << "First Complex Number: ";
	firstComplexNumber.print();

	cout << "\nSecond Complex Number: ";
	secondComplexNumber.print();

	cout << endl;
	complex result;
	cout << "Adding: ";
	result.adding(firstComplexNumber, secondComplexNumber);

	cout << endl;
	cout << "Substraction: ";

	result.substraction(firstComplexNumber, secondComplexNumber);

	
	return 0;
}