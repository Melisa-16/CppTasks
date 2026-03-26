#include <iostream>
#include "rational.h"

using namespace std;

//constructor
rational::rational(int number1, int number2) {
    int commonDivider = maximumDividerFinder(number1,number2);
	simplify(number1, number2, commonDivider);
};

//printing
void rational::printingAsFraction() {
	cout << numerator << "/" << denominator;
}
void rational::printingAsFloatNumber() {
	cout <<(double) numerator / denominator;
}

//GCD
int rational::maximumDividerFinder(int firstNumber,int secondNumber) {
	int maximumDivider = 1;
	int limit = (abs(firstNumber) < abs(secondNumber))? abs(firstNumber) : abs(secondNumber);
	
	for (int i = 2;i <= limit;i++) {
		if (firstNumber % i == 0 && secondNumber % i == 0) {
			maximumDivider = i;
		}
	}
	return maximumDivider;
};

//simplifying
void rational::simplify(int firstNumber,int secondNumber,int maximumDivider) {
	numerator = firstNumber / maximumDivider;
	denominator = secondNumber / maximumDivider;
};

//arithmetic
void rational::adding(rational firstFraction, rational secondFraction) {
	int  answerNumerator;
	int answerDenominator;

	if (firstFraction.denominator == secondFraction.denominator) {
		answerNumerator = firstFraction.numerator + secondFraction.numerator;
		answerDenominator = firstFraction.denominator;
	}
	else {
		answerNumerator = (firstFraction.numerator * secondFraction.denominator) + (secondFraction.numerator * firstFraction.denominator);
		answerDenominator = firstFraction.denominator * secondFraction.denominator;
	}
	
	int commonDivider = maximumDividerFinder(answerNumerator, answerDenominator);
	simplify(answerNumerator, answerDenominator, commonDivider);

}

void rational::substraction(rational firstFraction, rational secondFraction) {
	int  answerNumerator;
	int answerDenominator;

	if (firstFraction.denominator == secondFraction.denominator) {
		answerNumerator = firstFraction.numerator - secondFraction.numerator;
		answerDenominator = firstFraction.denominator;
	}
	else {
		answerNumerator = (firstFraction.numerator * secondFraction.denominator) - (secondFraction.numerator * firstFraction.denominator);
		answerDenominator = firstFraction.denominator * secondFraction.denominator;
	}

	int commonDivider = maximumDividerFinder(answerNumerator, answerDenominator);
	simplify(answerNumerator, answerDenominator, commonDivider);
}

void rational::multiplying(rational firstFraction, rational secondFraction) {
	int answerNumerator = firstFraction.numerator * secondFraction.numerator;
	int answerDenominator = firstFraction.denominator * secondFraction.denominator;

	int commonDivider = maximumDividerFinder(answerNumerator, answerDenominator);
	simplify(answerNumerator, answerDenominator, commonDivider);
}

void rational::division(rational firstFraction, rational secondFraction) {
	int answerNumerator = firstFraction.numerator * secondFraction.denominator;
	int answerDenominator = firstFraction.denominator * secondFraction.numerator;

	int commonDivider = maximumDividerFinder(answerNumerator, answerDenominator);
	simplify(answerNumerator, answerDenominator, commonDivider);
}