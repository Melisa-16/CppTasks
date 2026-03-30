#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void print() = 0;
	virtual void draw(char) = 0;
};

#endif