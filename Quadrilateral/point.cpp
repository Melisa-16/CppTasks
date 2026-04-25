#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}
void Point::print() {
	cout << "(" << x << "," << y << ")";
 }
void Point::setX(double newX) {
	x = newX;
}
void Point::setY(double newY) {
	y = newY;
}

double Point::getX() {
	return x;
}
double Point::getY() {
	return y;
}