#ifndef SQUARE_H
#define SQAURE_H

#include "Rectangle.h"

class Square {
private:
	double side;
public:
	Square(double);
	double perimeter();
	double area();
	double getSide();

	void setSide(double);
	void print();
	void draw(char);
};
#endif