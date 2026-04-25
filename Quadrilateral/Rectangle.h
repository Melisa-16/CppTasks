#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Quadrilateral.h"

class Rectangle :public Quadrilateral {
public:
	Rectangle(double, double, double, double, double, double);

	double area() override;
};
#endif