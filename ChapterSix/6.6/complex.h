#ifndef COMPLEX_H
#define COMPLEX_H

class complex {
private:
	float realPart;
	float imaginaryPart;
public:
	complex(float = 1,float = 1);
	void adding(complex,complex);
	void substraction(complex,complex);
	void print();
};
#endif 
