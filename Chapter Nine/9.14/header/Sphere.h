#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape {
private:
    double radius;
public:
    Sphere(double);

    double area();
    double volume();
    void print();

    double getRadius();
    void setRadius(double);
};

#endif