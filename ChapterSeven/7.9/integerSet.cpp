#include <iostream>
#include "IntegerSet.h"

using namespace std;

IntegerSet::IntegerSet() {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		integersSetArray[i] = 0;
	}
}
void IntegerSet::insertElement(int k) {
	if (k >= 0 && k < ARRAY_SIZE) {
		integersSetArray[k] = 1;
	}
}
void IntegerSet::deleteElement(int m) {
	if (m >= 0 && m < ARRAY_SIZE) {
		integersSetArray[m] = 1;
	}
}

IntegerSet IntegerSet::unionOfIntegerSet(IntegerSet secondSet) {
	IntegerSet result;
	
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (integersSetArray[i] == 1 || secondSet.integersSetArray[i] == 1) {
			result.integersSetArray[i] = 1;
		}
	}

	return result;
}
IntegerSet IntegerSet::interestionOfIntegerSets(IntegerSet secondSet) {
	IntegerSet result;

	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (integersSetArray[i] == 1 && secondSet.integersSetArray[i] == 1) {
			result.integersSetArray[i] = 1;
		}
	}

	return result;
}
void IntegerSet::setPrint() {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (integersSetArray[i] == 1) {
			cout << i << " ";
		}
	}
}
bool IntegerSet::isEqualTo(IntegerSet secondSet) {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (integersSetArray[i] != secondSet.integersSetArray[i]) {
			return 0;
		}
	}
	return 1;
}
