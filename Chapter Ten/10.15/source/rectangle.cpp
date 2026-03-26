#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
}

double Rectangle::area() {
    double area = length * width;
    return area;
}

void Rectangle::print() {
    cout << "Rectangle (length = " << length << ", width = " << width << ")" << endl;
}

void Rectangle::setLength(double newLength) {
    length = newLength;
}

void Rectangle::setWidth(double newWidth) {
    width = newWidth;
}

double Rectangle::getLength() {
    return length;
}

double Rectangle::getWidth() {
    return width;
}