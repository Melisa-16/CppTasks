#ifndef CUBE_H
#define CUBE_H

#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape {
private:
    double side;
public:
    Cube(double);

    double area() override;
    double volume() override;
    void print() override;

    void setSide(double);
    double getSide();
};

#endif  