#ifndef CONE_H
#define CONE_H

#include "ThreeDimensionalShape.h"

class Cone : public ThreeDimensionalShape {
private:
    double radius;
    double height;
public:
    Cone(double, double);

    double area();
    double volume();
    void print();

    double getRadius();
    double getHeight();

    void setRadius(double);
    void setHeight(double);
};

#endif