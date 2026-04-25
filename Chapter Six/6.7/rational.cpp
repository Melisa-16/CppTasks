#include <iostream>
#include "rational.h"

using namespace std;

//constructor
rational::rational(int number1, int number2) {
	if(number2 == 0) {
		cout<<"Denominator can not be zero\n";
	}
	else {
    int commonDivider = maximumDividerFinder(number1,number2);
	simplify(number1, number2, commonDivider);
	}
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
rational rational::adding(rational secondFraction) {
    int answerNumerator;
    int answerDenominator;

    if (denominator == secondFraction.denominator) {
        answerNumerator = numerator + secondFraction.numerator;
        answerDenominator = denominator;
    }
    else {
        answerNumerator = (numerator * secondFraction.denominator) + 
                          (secondFraction.numerator * denominator);
        answerDenominator = denominator * secondFraction.denominator;
    }

    return rational(answerNumerator, answerDenominator);
}

rational rational::subtraction(rational secondFraction) {
	int answerNumerator;
	int answerDenominator;

	if (denominator == secondFraction.denominator) {
		answerNumerator = numerator - secondFraction.numerator;
		answerDenominator = denominator;
	}
	else {
		answerNumerator = (numerator * secondFraction.denominator) - (secondFraction.numerator * denominator);
		answerDenominator = denominator * secondFraction.denominator;
	}
    return rational(answerNumerator, answerDenominator);
}

rational rational::multiplying(rational secondFraction) {
	int answerNumerator = numerator * secondFraction.numerator;
	int answerDenominator = denominator * secondFraction.denominator;
    return rational(answerNumerator, answerDenominator);
}

rational rational::division(rational secondFraction) {
	int answerNumerator = numerator * secondFraction.denominator;
	int answerDenominator = denominator * secondFraction.numerator;
    return rational(answerNumerator, answerDenominator);
}
