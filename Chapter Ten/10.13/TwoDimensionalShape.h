#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "Shape.h"

class TwoDimensionalShape :public Shape {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void print() = 0;
	virtual void draw(char) = 0;
};

#endif