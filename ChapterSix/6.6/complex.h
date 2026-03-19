#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	float realPart;
	float imaginaryPart;

public:
	complex(float = 1,float = 1);
	void adding(complex,complex);
	void substraction(complex,complex);

	Complex(float, float);
	Complex adding(Complex);
	Complex substraction(Complex);

	void print();
};

#endif