#include <iostream>
#include <cmath>
#include "Cube.h"

using namespace std;

Cube::Cube(float x, float y, float side) :Square(x, y, side) {
}
float Cube::surfaceArea() {
	float cubeArea = 6 * Square::area();
	return cubeArea;
}
float Cube::volume() {
	float cubeVolume = pow(Square::getSide(), 3);
	return cubeVolume;
}