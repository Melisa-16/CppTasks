#include <iostream>
#include "Cuboid.h"

using namespace std;

Cuboid::Cuboid(double length, double width, double height) {
    this->length = length;
    this->width = width;
    this->height = height;
}

double Cuboid::area() {
    double area = 2 * width * (length + height) + 2 * length * height;
    return area;
}

double Cuboid::volume() {
    double volume = length * width * height;
    return volume;
}

void Cuboid::print() {
    cout << "Cuboid (length = " << length
        << ", width = " << width
        << ", height = " << height << ")" << endl;
}

double Cuboid::getLength() {
    return length;
}

double Cuboid::getHeight() {
    return height;
}

double Cuboid::getWidth() {
    return width;
}

void Cuboid::setLength(double newLength) {
    length = newLength;
}

void Cuboid::setWidth(double newWidth) {
    width = newWidth;
}

void Cuboid::setHeight(double newHeight) {
    height = newHeight;
}