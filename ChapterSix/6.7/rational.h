#ifndef RATIONAL_H
#define RATIONAL_H

class rational {
private:
	int numerator;
	int denominator;
public:
	rational(int = 1,int = 1);
	void adding(rational, rational);
	void simplify(int,int,int);
	void substraction(rational,rational);
	void multiplying(rational, rational);
	void division(rational, rational);
	void printingAsFraction();
	void printingAsFloatNumber();

	int maximumDividerFinder(int, int);
};
#endif
