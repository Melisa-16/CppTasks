#ifndef CONE_H
#define CONE_H

#include "ThreeDimensionalShape.h"

class Cone : public ThreeDimensionalShape {
private:
    double radius;
    double height;
public:
    Cone(double, double);

    double area() override;
    double volume() override;
    void print() override;

    double getRadius();
    double getHeight();

    void setRadius(double);
    void setHeight(double);
};

#endif