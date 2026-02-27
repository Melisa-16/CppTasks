#ifndef COMPLEX_H
#define COMPLEX_H

class complex {
private:
	float realPart;
	float imaginaryPart;
public:
	complex(float,float);
	void adding(complex,complex);
	void substraction(complex,complex);
	void print();
};
#endif 
