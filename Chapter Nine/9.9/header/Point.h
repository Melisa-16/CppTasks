#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point {
private:
    float x;
    float y; 
public:
    Point(float = 0, float = 0);

    void setPoint(float,float);

    float getX() const;
    float getY() const;
};

#endif
