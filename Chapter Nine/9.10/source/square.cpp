#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(float x, float y, float side) :Point(x, y) {
	squareSide = side;
}
float Square::area() {
	float squareArea = squareSide * squareSide;
	return squareArea;
}
float Square::perimeter() {
	float squarePerimeter = 4 * squareSide;
	return squarePerimeter;
}
float Square::getSide() {
	return squareSide;
}
