#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual double area();
    virtual double volume();
    virtual void print();
    virtual void draw(char fill) ;
};

#endif