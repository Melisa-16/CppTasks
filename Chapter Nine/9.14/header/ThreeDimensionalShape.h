#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H

#include "Shape.h"

class ThreeDimensionalShape : public Shape {
public:
     double area();
     double volume();
     void print();
};

#endif