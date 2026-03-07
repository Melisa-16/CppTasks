#include <iostream>
#include "IntegerSet.h";

using namespace std;

int main() {
	IntegerSet firstSet;
	IntegerSet secondSet;

	firstSet.insertElement(2);
	firstSet.insertElement(5);
	firstSet.insertElement(10);

	secondSet.insertElement(5);
	secondSet.insertElement(7);
	secondSet.insertElement(10);

	cout << "First set: ";
	firstSet.setPrint();

	cout << endl;

	cout << "Second set: ";
	secondSet.setPrint();

	cout << endl;

	IntegerSet unionSet = firstSet.unionOfIntegerSet(secondSet);
	cout << "Union: ";
	unionSet.setPrint();

	cout << endl;

	IntegerSet interestionSet = firstSet.interestionOfIntegerSets(secondSet);
	cout << "Interestion: ";
	interestionSet.setPrint();

	cout << endl << endl;

	return 0;

}