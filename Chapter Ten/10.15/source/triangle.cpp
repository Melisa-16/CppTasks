#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(double base, double height) {
    this->base = base;
    this->height = height;
}

double Triangle::area() {
    return 0.5 * base * height;
}

void Triangle::print() {
    cout << "Triangle: base = " << base << ", height = " << height << endl;
}

void Triangle::setBase(double newBase) {
    base = newBase;
}

void Triangle::setHeight(double newHeight) {
    height = newHeight;
}

double Triangle::getBase() {
    return base;
}

double Triangle::getHeight() {
    return height;
}