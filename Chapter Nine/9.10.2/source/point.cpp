#include <iostream>
#include "Point.h"

Point::Point(float x, float y) {
	setPoint(x, y);
}
void Point::setPoint(float x, float y) {
	this->x = x;
	this->y = y;
}
float Point::getX() {
	return x;
}
float Point::getY() {
	return y;
}