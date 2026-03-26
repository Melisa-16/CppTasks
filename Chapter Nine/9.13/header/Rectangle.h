#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Parallelogram.h"

class Rectangle : public Parallelogram {
public:
    Rectangle(Point, Point, Point, Point);

    void display();

    double perimeter();
    double area();
};

#endif