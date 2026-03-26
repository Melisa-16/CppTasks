#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Trapezoid.h"

class Parallelogram : public Trapezoid {
public:
    Parallelogram(Point, Point, Point, Point);

    void display();
    double perimeter();
    double area();
};

#endif