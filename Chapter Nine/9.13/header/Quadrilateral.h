#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include <iostream>
#include "Point.h"

using namespace std;

class Quadrilateral {
private:
    Point firstPoint;
    Point secondPoint;
    Point thirdPoint;
    Point fourthPoint;
public:
    Quadrilateral(Point = Point(), Point = Point(), Point = Point(), Point = Point());

    Point getFirstPoint();
    Point getSecondPoint();
    Point getThirdPoint();
    Point getFourthPoint();

    void display();

    double sideLength(Point, Point);
    double perimeter();
};

#endif