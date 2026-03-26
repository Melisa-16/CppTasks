#include "Parallelogram.h"
#include <iostream>

using namespace std;

Parallelogram::Parallelogram(Point firstPoint, Point secondPoint, Point thirdPoint, Point forthPoint)
    : Trapezoid(firstPoint, secondPoint, thirdPoint, forthPoint) {
}

void Parallelogram::display(){
    cout << "Parallelogram's points" << endl;
    Quadrilateral::display();
}

double Parallelogram::perimeter(){
    return Quadrilateral::perimeter();
}

double Parallelogram::area(){
    Point firstPoint = getFirstPoint();
    Point secondPoint = getSecondPoint();
    Point fourthPoint = getFourthPoint();

    double base = sideLength(firstPoint, secondPoint);
    double height = abs(fourthPoint.getY() - firstPoint.getY());

    double area = base * height;
    return area;
}
