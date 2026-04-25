#include "Rectangle.h"

Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3)
    : Quadrilateral(x1, y1, x2, y2, x3, y3)
{
}

double Rectangle::area() {
    double length = calculateSide(getFirstPoint().getX(), getFirstPoint().getY(),
                                  getSecondPoint().getX(), getSecondPoint().getY());

    double width = calculateSide(getSecondPoint().getX(), getSecondPoint().getY(),
                                 getThirdPoint().getX(), getThirdPoint().getY());

    double area = length * width;
    return area;
}
