#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "TwoDimensionalShape.h"

class Triangle : public TwoDimensionalShape {
private:
    double base;
    double height;
public:
    Triangle(double, double);

    double area() override;
    void print() override;

    void setBase(double);
    void setHeight(double);

    double getBase();
    double getHeight();
};

#endif