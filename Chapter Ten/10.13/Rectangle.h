#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "TwoDimensionalShape.h"

class Rectangle :public TwoDimensionalShape {
private:
    double width;
    double length;
public:
    Rectangle(double, double);
    double area() override;
    double perimeter() override;
    
    void setLength(double);
    void setWidth(double);

    double getLength();
    double getWidth();

    void print();
    void draw(char);
};
#endif