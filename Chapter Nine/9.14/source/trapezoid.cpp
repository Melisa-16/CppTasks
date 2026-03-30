#include <iostream>
#include "Trapezoid.h"

using namespace std;

Trapezoid::Trapezoid(double base1, double base2, double height) {
    firstBase = base1;
    secondBase = base2;
    this->height = height;
}

double Trapezoid::area() {
    double area = 0.5 * (firstBase + secondBase) * height;
    return area;
}

void Trapezoid::print() {
    cout << "Trapezoid (first base = " << firstBase
        << ", second base = " << secondBase
        << ", height = " << height << ")" << endl;
}

double Trapezoid::getFirstBase() {
    return firstBase;
}

double Trapezoid::getSecondBase() {
    return secondBase;
}

double Trapezoid::getHeight() {
    return height;
}

void Trapezoid::setFirstBase(double newFirstBase) {
    firstBase = newFirstBase;
}

void Trapezoid::setSecondBase(double newSecondBase) {
    secondBase = newSecondBase;
}

void Trapezoid::setHeight(double newHeight) {
    height = newHeight;
}