#ifndef SQUARE_H
#define SQUARE_H

#include "TwoDimensionalShape.h"

class Square : public TwoDimensionalShape {
private:
    double side;
public:
    Square(double);

    double area() override;
    void print() override;

    void setSide(double);
    double getSide();
};

#endif