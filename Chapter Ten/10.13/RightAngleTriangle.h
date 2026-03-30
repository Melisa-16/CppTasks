#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "TwoDimensionalShape.h"

class Triangle : public TwoDimensionalShape {
private:
    double base;
    double height;
    double side1;
    double side2;
    double side3;

public:
    Triangle(double base, double height, double side1, double side2, double side3);

    double area() override;
    double perimeter() override;

    double getBase();
    double getHeight();
    double getSide1();
    double getSide2();
    double getSide3();

    void setBase(double);
    void setHeight(double);
    void setSide1(double);
    void setSide2(double);
    void setSide3(double);

    void print() override;
    void draw(char) override;
};

#endif