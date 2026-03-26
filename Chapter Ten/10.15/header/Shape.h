#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual double area() = 0;
    virtual double volume() = 0;
    virtual void print() = 0;   
    virtual ~Shape() {}
};

#endif