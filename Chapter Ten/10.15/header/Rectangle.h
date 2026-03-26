#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "TwoDimensionalShape.h"

class Rectangle : public TwoDimensionalShape {
private:
    double length;
    double width;
public:
    Rectangle(double, double);

    double area() override;
    void print() override;

    void setLength(double);
    void setWidth(double);

    double getLength();
    double getWidth();
};

#endif