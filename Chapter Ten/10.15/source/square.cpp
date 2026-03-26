#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(double side) {
    this->side = side;
}

double Square::area() {
    double area = side * side;
    return area;
}

void Square::print() {
    cout << "Square (side = " << side << ")" << endl;
}

void Square::setSide(double newSide) {
    side = newSide;
}

double Square::getSide() {
    return side;
}