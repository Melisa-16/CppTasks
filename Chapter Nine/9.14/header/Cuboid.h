#ifndef CUBOID_H
#define CUBOID_H

#include "ThreeDimensionalShape.h"

class Cuboid : public ThreeDimensionalShape {
private:
    double length;
    double width;
    double height;
public:
    Cuboid(double, double, double);

    double area();
    double volume();
    void print();

    double getLength();
    double getWidth();
    double getHeight();

    void setLength(double);
    void setWidth(double);
    void setHeight(double);
};

#endif