#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "Shape.h"

class TwoDimensionalShape : public Shape {
public:
    double volume() override { return 0; }
    virtual double area() = 0;
    virtual void print() = 0;
};

#endif