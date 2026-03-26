#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point(double = 0, double = 0);

    void setX(double);
    void setY(double);

    double getX() const;
    double getY() const;
};

#endif