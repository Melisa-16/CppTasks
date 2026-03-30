#include "RightAngleTriangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(double base, double height, double side1, double side2, double side3) {
    this->base = base;
    this->height = height;
    this->side1 = side1;
    this->side2 = side2;
    this->side3 = side3;
}

double Triangle::area() {
    double area = 0.5 * base * height;
    return area;
}

double Triangle::perimeter() {
    double perimeter = side1 + side2 + side3;
    return perimeter;
}

double Triangle::getBase() {
    return base;
}

double Triangle::getHeight() {
    return height;
}

double Triangle::getSide1() {
    return side1;
}

double Triangle::getSide2() {
    return side2;
}

double Triangle::getSide3() {
    return side3;
}

void Triangle::setBase(double newBase) {
    base = newBase;
}

void Triangle::setHeight(double newHeight) {
    height = newHeight;
}

void Triangle::setSide1(double newSide1) {
    side1 = newSide1;
}

void Triangle::setSide2(double newSide2) {
    side2 = newSide2;
}

void Triangle::setSide3(double newSide3) {
    side3 = newSide3;
}

void Triangle::print() {
    cout << "Triangle" << endl
        << "Base: " << getBase() << endl
        << "Height: " << getHeight() << endl
        << "Side 1: " << getSide1() << endl
        << "Side 2: " << getSide2() << endl
        << "Side 3: " << getSide3() << endl
        << "Perimeter: " << perimeter() << endl
        << "Area: " << area() << endl;
}

void Triangle::draw(char charToDrawWith) {
    int rows = (int)height;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << charToDrawWith << " ";
        }
        cout << endl;
    }
}