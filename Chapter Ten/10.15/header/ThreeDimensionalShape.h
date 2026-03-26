#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H

#include "Shape.h"

class ThreeDimensionalShape : public Shape {
public:
    virtual double area() = 0;
    virtual double volume() = 0;
    virtual void print() = 0;
};

#endif