#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(Point firstPoint, Point secondPoint, Point thirdPoint, Point forthPoint)
    : Parallelogram(firstPoint, secondPoint, thirdPoint, forthPoint) {
}

void Rectangle::display(){
    cout << "Rectangle's points" << endl;
    Quadrilateral::display();
}
double Rectangle::perimeter() {
    return Quadrilateral::perimeter();
}
double Rectangle::area() {
    Point firstPoint = getFirstPoint();
    Point secondPoint = getSecondPoint();
    Point thirdPoint = getThirdPoint();

    double length = sideLength(firstPoint, secondPoint);
    double width = sideLength(secondPoint, thirdPoint);

    double area = length * width;
    return area;
}