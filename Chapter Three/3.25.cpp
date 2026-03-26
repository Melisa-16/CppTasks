//find integer part of two 'a' and 'b'  integer numbers division (a/b) 
// 
//find remainder of a / b
// 
//write program that output integer inputed number with spaces,
// 
//if inputed number was 1234 
//output must be 1 2 3 4 

#include <iostream>

using namespace std;

void integerPartOfDivision(int, int);
void remainderPartOfDivision(int, int);

int main() {

	int firstInteger;
	int secondInteger;

	cout << "Enter fisrt integer number: ";
	cin >> firstInteger;
	cout << "Enter second integer number: ";
	cin >> secondInteger;
	cout << endl;

	cout << "Integer part when " << firstInteger << " is divided to " << secondInteger << ": ";
	integerPartOfDivision(firstInteger, secondInteger);
	cout << endl;

	cout << "Remainder when " << firstInteger << " is divided to " << secondInteger << ": ";
	remainderPartOfDivision(firstInteger, secondInteger);

	return 0;
}

void integerPartOfDivision(int firstIntegerNumber, int secondIntegerNumber) {
	int integerPartOfDivision;
	integerPartOfDivision = firstIntegerNumber / secondIntegerNumber;

	cout << integerPartOfDivision;
}
void remainderPartOfDivision(int firstIntegerNumber, int secondIntegerNumber) {
	int remainderOfDivision;
	remainderOfDivision = firstIntegerNumber % secondIntegerNumber;

	cout << remainderOfDivision;
}