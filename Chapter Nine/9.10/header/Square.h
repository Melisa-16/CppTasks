#ifndef SQUARE_H
#define SQUARE_H

#include "Point.h"

class Square:public Point{
private:
	float squareSide;
public:
	Square(float = 0, float = 0, float = 0);

	float area();
	float perimeter();
	float getSide();
};
#endif