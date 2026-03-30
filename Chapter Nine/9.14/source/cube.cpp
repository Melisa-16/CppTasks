#include <iostream>
#include "Cube.h"

using namespace std;

Cube::Cube(double side) {
    this->side = side;
}

double Cube::area() {
    double area = 6 * side * side;
    return area;
}

double Cube::volume() {
    double volume = side * side * side;
    return volume;
}

void Cube::print() {
    cout << "Cube (side = " << side << ")" << endl;
}

double Cube::getSide() {
    return side;
}

void Cube::setSide(double newSide) {
    side = newSide;
}