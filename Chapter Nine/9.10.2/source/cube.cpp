#include <iostream>
#include <cmath>
#include "Cube.h"

using namespace std;

Cube::Cube(float x, float y, float cubeSide) :square(x, y, cubeSide) {
}
float Cube::surfaceArea() {
	float cubeArea = 6 * square.area();
	return cubeArea;
}
float Cube::volume() {
	float cubeVolume = pow(square.getSide(), 3);
	return cubeVolume;
}
Square Cube::getSquare() {
	return square;
}
Point Cube::getPoint() {
	return square.getPoint();
}