#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex(float number1, float number2) {
	realPart = number1;
	imaginaryPart = number2;
}

Complex Complex::adding(Complex secondNumber) {
	float answerRealPart = realPart + secondNumber.realPart;
	float answerImaginaryPart = imaginaryPart + secondNumber.imaginaryPart;

	Complex result(answerRealPart, answerImaginaryPart);
	return result;
}

Complex Complex::substraction(Complex secondNumber) {
	float answerRealPart = realPart - secondNumber.realPart;
	float answerImaginaryPart = imaginaryPart - secondNumber.imaginaryPart;

	Complex result(answerRealPart, answerImaginaryPart);
	return result;
}

void Complex::print() {
	cout << "(" << realPart << "," << imaginaryPart << ")";
}