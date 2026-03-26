#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(Point firstPoint, Point secondPoint, Point thirdPoint, Point forthPoint)
    : Rectangle(firstPoint, secondPoint, thirdPoint, forthPoint) {
}

void Square::display(){
    cout << "Square's points" << endl;
    Quadrilateral::display();
}
double Square::perimeter() {
    return Quadrilateral::perimeter();
}
double Square::area() {
    Point firstPoint = getFirstPoint();
    Point secondPoint = getSecondPoint();

    double side = sideLength(firstPoint, secondPoint);

    double area = side * side;
    return area;
}