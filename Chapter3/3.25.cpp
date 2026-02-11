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

int main() {

	int firstInteger;
	int secondInteger;

	cout << "Enter fisrt integer number: ";
	cin >> firstInteger;
	cout << "Enter second integer number: ";
	cin >> secondInteger;

	cout << endl << endl;

	int integerPartOfDivision ;

	integerPartOfDivision = firstInteger / secondInteger;

	cout <<"Integer part when "<< firstInteger <<" is divided to "<< secondInteger <<": "
		 << integerPartOfDivision<<endl<<endl;


	int remainderOfDivision;

	remainderOfDivision = firstInteger % secondInteger;

	cout << "Remainder when " << firstInteger << " is divided to " << secondInteger << ": "
		<< remainderOfDivision<<endl<<endl;


	return 0;

}
