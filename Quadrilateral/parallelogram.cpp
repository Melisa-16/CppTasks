//A-------B
// \       \
//  D-------C

#include "Parallelogram.h"
#include <cmath>

Parallelogram::Parallelogram(double x1, double y1, double x2, double y2, double x3, double y3)
	:Quadrilateral(x1, y1, x2, y2, x3, y3) 
{
}

double Parallelogram::area() {
	Point A = getFirstPoint();
	Point C = getThirdPoint();
	Point D = getFourthPoint();
	
	double height = calculateSide(D.getX(), D.getY(), D.getX(), A.getY());
	double base = calculateSide(D.getX(), D.getY(), C.getX(), C.getY());
	double area = height * base;

	return area;
}