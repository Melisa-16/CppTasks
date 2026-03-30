#ifndef CYLINDER_H
#define CYLINDER_H

#include "ThreeDimensionalShape.h"

class Cylinder : public ThreeDimensionalShape {
private:
    double radius;
    double height;
public:
    Cylinder(double, double);

    double area();
    double volume();
    void print();

    double getRadius();
    double getHeight();

    void setRadius(double);
    void setHeight(double);
};

#endif