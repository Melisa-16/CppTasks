#include <iostream>
#include "Cylindr.h"

Cylindr::Cylindr(float h, float r, float x, float y)
	:circle(r, x, y) {
	height = h;
}
void Cylindr::setHeight(float h) {
	height = h;
}
void Cylindr::setPoint(float x, float y) {
	circle.setCenter(x, y);
}
float Cylindr::getHeight() const {
	return height;
}
float Cylindr::area() const{
	return 2 * circle.area() +
		2 * 3.14159 * circle.getRadius() * height;
}
float Cylindr::volume() const {
	return circle.area() * height;
}
Circle Cylindr::getCircle() const {
	return circle;
}
Point Cylindr::getPoint() const {
	return circle.getCenter();
}
