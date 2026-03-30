#include <iostream>
#include "Cylinder.h"

using namespace std;

const double PI_NUMBER = 3.14159;

Cylinder::Cylinder(double radius, double height) {
    this->radius = radius;
    this->height = height;
}

double Cylinder::area() {
    double area = 2 * PI_NUMBER * radius * (radius + height);
    return area;
}

double Cylinder::volume() {
    double volume = PI_NUMBER * radius * radius * height;
    return volume;
}

void Cylinder::print() {
    cout << "Cylinder (radius = " << radius << ", height = " << height << ")" << endl;
}

double Cylinder::getHeight() {
    return height;
}

double Cylinder::getRadius() {
    return radius;
}

void Cylinder::setHeight(double newHeight) {
    height = newHeight;
}

void Cylinder::setRadius(double newRadius) {
    radius = newRadius;
}