#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(float r, float a, float b)
	: point(a, b) 
{
	radius = r;
}
void Circle::setRadius(float r) {
	radius = r;
}
void Circle::setCenter(float x, float y) {
	point.setPoint(x, y);
}
float Circle::getRadius() const{
	return radius;
}
float Circle::area() const {
	return 3.14159 * radius * radius;
}
Point Circle::getCenter() const{
	return point;
}

