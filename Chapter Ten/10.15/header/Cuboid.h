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

    double area() override;
    double volume() override;
    void print() override;

    double getLength();
    double getWidth();
    double getHeight();

    void setLength(double);
    void setWidth(double);
    void setHeight(double);
};

#endif