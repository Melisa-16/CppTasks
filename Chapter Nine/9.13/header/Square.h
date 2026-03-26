#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(Point, Point, Point, Point);

    void display();
    double perimeter();
    double area();
};

#endif