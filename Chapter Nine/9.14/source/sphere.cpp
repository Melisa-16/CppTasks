#include <iostream>
#include "Sphere.h"

using namespace std;

const double PI_NUMBER = 3.14159;

Sphere::Sphere(double radius) {
    this->radius = radius;
}

double Sphere::area() {
    double area = 4 * PI_NUMBER * radius * radius;
    return area;
}

double Sphere::volume() {
    double volume = (4.0 / 3.0) * PI_NUMBER * radius * radius * radius;
    return volume;
}

void Sphere::print() {
    cout << "Sphere (radius = " << radius << ")" << endl;
}

double Sphere::getRadius() {
    return radius;
}

void Sphere::setRadius(double newRadius) {
    radius = newRadius;
}