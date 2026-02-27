#include <iostream>
#include "hugeInteger.h"

using namespace std;

void HugeInteger::inputHugeInteger() {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		cout << "Enter " << i + 1 << " element: ";
		cin >> hugeIntegerArray[i];
	}
}
void HugeInteger::outputHugeInteger() {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		cout << hugeIntegerArray[i]<<" ";
	}
}
void HugeInteger::addHugeIntegers(HugeInteger firstArray,HugeInteger secondArray) {
	long long sum = 0;

	for (int i = 0;i < ARRAY_SIZE;i++) {
		sum = firstArray.hugeIntegerArray[i] + secondArray.hugeIntegerArray[i];
		cout << "Sum of " << i + 1 <<" elements from each array = "<<sum;
	}
}
void HugeInteger::substractHugeIntegers(HugeInteger firstArray, HugeInteger secondArray) {
	long long substraction = 0;

	for (int i = 0;i < ARRAY_SIZE;i++) {
		substraction = firstArray.hugeIntegerArray[i] - secondArray.hugeIntegerArray[i];
		cout << "Substraction of " << i + 1 << " elements from each array = " << substraction;
	}
}

bool HugeInteger::isEqualTo(HugeInteger secondArray) {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (hugeIntegerArray[i] != secondArray.hugeIntegerArray[i]) {
			return 0;
		}
	}
	return 1;
}
bool HugeInteger::isNotEqualTo(HugeInteger secondArray) {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (hugeIntegerArray[i] != secondArray.hugeIntegerArray[i]) {
			return 1;
		}
	}
	return 0;
}
bool HugeInteger::isGreaterThan(HugeInteger secondArray) {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (hugeIntegerArray[i] > secondArray.hugeIntegerArray[i]) {
			return 1;
		}
		if (hugeIntegerArray[i] < secondArray.hugeIntegerArray[i]) {
			return 0;
		}
	}     
}
bool HugeInteger::isLessThan(HugeInteger secondArray) {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (hugeIntegerArray[i] < secondArray.hugeIntegerArray[i]) {
			return 1;
		}
		if (hugeIntegerArray[i] > secondArray.hugeIntegerArray[i]) {
			return 0;
		}
	}
}
bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger secondArray) {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (hugeIntegerArray[i] >= secondArray.hugeIntegerArray[i]) {
			return 1;
		}
		if (hugeIntegerArray[i] < secondArray.hugeIntegerArray[i]) {
			return 0;
		}
	}
}
bool HugeInteger::isLessThanOrEqualTo(HugeInteger secondArray) {
	for (int i = 0;i < ARRAY_SIZE;i++) {	
		if (hugeIntegerArray[i] <= secondArray.hugeIntegerArray[i]) {
				return 1; 
		}
		if (hugeIntegerArray[i] > secondArray.hugeIntegerArray[i]) {
				return 0;   
		}
	}
}

bool HugeInteger::isZero() {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		if (hugeIntegerArray[i] != 0) {
			return 0;
		}
	}
	return 1;
}