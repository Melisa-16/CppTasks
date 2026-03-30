#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "Shape.h"
#include <iostream>
using namespace std;

class TwoDimensionalShape : public Shape {
public:
    double volume() override { return 0; }

    virtual double area();
    virtual void print();
    virtual void draw(char fill);
};

#endif