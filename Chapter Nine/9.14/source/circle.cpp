#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(double radius) {
    this->radius = radius;
}

double Circle::area() {
    const double PI_NUMBER = 3.14159;

    double area = PI_NUMBER * radius * radius;
    return area;
}

void Circle::print() {
    cout << "Circle (radius = " << radius << ")" << endl;
}

void Circle::setRadius(double newRadius) {
    radius = newRadius;
}

double Circle::getRadius() {
    return radius;
}