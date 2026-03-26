#ifndef SQUARE_H
#define SQUARE_H

#include "Point.h"

class Square{
private:
	float squareSide;
	Point point;
public:
	Square(float = 0, float = 0, float = 0);

	float area();
	float perimeter();
	float getSide();
	Point getPoint();
};
#endif
