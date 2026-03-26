#include <iostream>
#include <cmath>
#include "Cone.h"

using namespace std;

const double PI_NUMBER = 3.14159;

Cone::Cone(double radius, double height) {
    this->radius = radius;
    this->height = height;
}

double Cone::area() {
    double area = PI_NUMBER * radius * (radius + sqrt(radius * radius + height * height));
    return area;
}

double Cone::volume() {
    double volume = (1.0 / 3.0) * PI_NUMBER * radius * radius * height;
    return volume;
}

void Cone::print() {
    cout << "Cone (radius = " << radius << ", height = " << height << ")" << endl;
}

double Cone::getHeight() {
    return height;
}

double Cone::getRadius() {
    return radius;
}

void Cone::setHeight(double newHeight) {
    height = newHeight;
}

void Cone::setRadius(double newRadius) {
    radius = newRadius;
}