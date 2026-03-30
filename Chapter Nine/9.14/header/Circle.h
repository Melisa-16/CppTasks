#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape {
private:
    double radius;
public:
    Circle(double);

    double area() override;
    void print() override;
    char draw(char) override;

    void setRadius(double);
    double getRadius();
};

#endif