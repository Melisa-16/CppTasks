#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Point.h"

class Quadrilateral {
private:
	Point firstPoint;
	Point secondPoint;
	Point thirdPoint;
	Point fourthPoint;
	double side;
public:
	Quadrilateral(double, double, double, double, double, double);

	Point getFirstPoint();
	Point getSecondPoint();
	Point getThirdPoint();
	Point getFourthPoint();

	double perimeter();
	double calculateSide(double,double,double,double);

	virtual double area() = 0;
};
#endif
