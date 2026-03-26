#include <iostream>
#include <string>
#include "hugeInteger.h"

using namespace std;

void HugeInteger::inputHugeInteger() {
	string inputNumber;
	cout << "Enter a number (up to 40 digits): ";
	cin >> inputNumber;

	// Clear the array first
	for (int i = 0; i < ARRAY_SIZE; i++) {
		hugeIntegerArray[i] = 0;
	}

	// Fill the array from the right
	int inputLength = inputNumber.length();
	if (inputLength > ARRAY_SIZE) {
		cout << "Number too big! Only the last 40 digits will be used.\n";
		inputLength = ARRAY_SIZE;
	}

	for (int i = 0; i < inputLength; i++) {
		char c = inputNumber[inputLength - 1 - i];
		if (c >= '0' && c <= '9') {
			hugeIntegerArray[ARRAY_SIZE - 1 - i] = c - '0';
		}
		else {
			cout << "Invalid character in number. Treating as 0.\n";
			hugeIntegerArray[ARRAY_SIZE - 1 - i] = 0;
		}
	}
}
void HugeInteger::outputHugeInteger() {
	for (int i = 0;i < ARRAY_SIZE;i++) {
		cout << hugeIntegerArray[i]<<" ";
	}
}
HugeInteger HugeInteger::addHugeIntegers(HugeInteger secondArray) {
	HugeInteger result;
	
	for (int i = 0;i < ARRAY_SIZE;i++) {
		result.hugeIntegerArray[i] = hugeIntegerArray[i] + secondArray.hugeIntegerArray[i];
	}
	return result;
}
HugeInteger HugeInteger::substractHugeIntegers(HugeInteger secondArray) {
	HugeInteger result;

	for (int i = 0;i < ARRAY_SIZE;i++) {
		result.hugeIntegerArray[i] = hugeIntegerArray[i] - secondArray.hugeIntegerArray[i];
	}
	return result;
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