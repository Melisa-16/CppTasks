#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Quadrilateral.h"

class Trapezoid : public Quadrilateral {
public:
    Trapezoid(Point, Point, Point , Point);

    void display();
    double perimeter();
    double area();
};

#endif