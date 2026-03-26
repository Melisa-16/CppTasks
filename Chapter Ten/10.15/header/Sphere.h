#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape {
private:
    double radius;
public:
    Sphere(double);

    double area() override;
    double volume() override;
    void print() override;

    double getRadius();
    void setRadius(double);
};

#endif