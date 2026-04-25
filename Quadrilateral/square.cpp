#include "Square.h"

Square::Square(double x1, double y1, double x2, double y2, double x3, double y3)
	:Rectangle(x1, y1, x2, y2, x3, y3)
{
}

double Square::getSide() {
    double side = calculateSide(getFirstPoint().getX(), getFirstPoint().getY(),
        getSecondPoint().getX(), getSecondPoint().getY());
    return side;
}