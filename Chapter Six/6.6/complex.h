#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	float realPart;
	float imaginaryPart;
public:
	complex(float = 1,float = 1);
	Complex adding(Complex);
	Complex substraction(Complex);
	void print();
};

#endif
