#ifndef HUGEINT_H
#define HUGEINT_H

class HugeInteger {
private:
	static const int ARRAY_SIZE = 40;
	long long hugeIntegerArray[ARRAY_SIZE];
public:
	void inputHugeInteger();
	void outputHugeInteger();
	HugeInteger addHugeIntegers(HugeInteger);
	HugeInteger substractHugeIntegers(HugeInteger);

	bool isEqualTo(HugeInteger);
	bool isNotEqualTo(HugeInteger);
	bool isGreaterThan(HugeInteger);
	bool isLessThan(HugeInteger);
	bool isGreaterThanOrEqualTo(HugeInteger);
	bool isLessThanOrEqualTo(HugeInteger);
	bool isZero();
};
#endif
