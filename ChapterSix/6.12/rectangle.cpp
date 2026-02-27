#include "rectangle.h"

rectangle::rectangle(float firstSide, float secondSide) {
	setWidth(firstSide);
	setLength(secondSide);
}
void rectangle::setWidth(float firstSide) {
	width = (firstSide > 0.0 && firstSide <= 20.0) ? firstSide : 1;
}
void rectangle::setLength(float secondSide) {
	length = (secondSide > 0.0 && secondSide <= 20.0) ? secondSide : 1;
}
float rectangle::getWidth() {
	return width;
}
float rectangle::getLength() {
	return length;
}
float rectangle::area() {
	float areaOfRectangle = length * width;
	return areaOfRectangle;
}
float rectangle::perimeter() {
	float perimeterOfRectangle = 2 * (length + width);
	return perimeterOfRectangle;
}

