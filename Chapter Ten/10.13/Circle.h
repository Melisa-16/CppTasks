#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle:public Shape{
private:
	double radius;
	int x;
	int y;
public:
	Circle(int, int, double);
	double area() override;
	double circumference();

	double getRadius();
	double getX();
	double getY();
	
	void setRadius(double);
	void setX(int);
	void setY(int);

	void print() override;
	void draw(char) override;
};
#endif
