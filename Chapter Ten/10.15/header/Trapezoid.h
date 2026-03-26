#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "TwoDimensionalShape.h"

class Trapezoid : public TwoDimensionalShape {
private:
    double firstBase;
    double secondBase;
    double height;
public:
    Trapezoid(double, double, double);

    double area() override;
    void print() override;

    double getFirstBase();
    double getSecondBase();
    double getHeight();

    void setFirstBase(double);
    void setSecondBase(double);
    void setHeight(double);
};

#endif