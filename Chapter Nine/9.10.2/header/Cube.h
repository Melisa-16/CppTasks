#ifndef CUBE_H
#define CUBE_H

#include "Square.h"

class Cube{
private:
	Square square;
public:
	Cube(float = 0, float = 0, float = 0);

	float surfaceArea();
	float volume();

	Square getSquare();
	Point getPoint();
};
#endif