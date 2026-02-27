#include <iostream>
#include "complex.h"

using namespace std;

complex::complex(float number1, float number2) {
	realPart = number1;
	imaginaryPart = number2;
}

void complex::adding(complex firstNumber,complex secondNumber) {
	float answerRealPart = firstNumber.realPart + secondNumber.realPart;
	float answerImaginaryPart = firstNumber.imaginaryPart + secondNumber.imaginaryPart;

	cout << "(" << answerRealPart << "," << answerImaginaryPart << ")";
}

void complex::substraction(complex firstNumber, complex secondNumber) {
	float answerRealPart = secondNumber.realPart - firstNumber.realPart;
	float answerImaginaryPart =  secondNumber.imaginaryPart - firstNumber.imaginaryPart;

	cout << "(" << answerRealPart << "," << answerImaginaryPart << ")";
}
void complex::print() {
	cout << "(" <<realPart << "," << imaginaryPart << ")";
}