#include "Trapezoid.h"
#include <iostream>

using namespace std;

Trapezoid::Trapezoid(Point firstPoint, Point secondPoint, Point thirdPoint, Point forthPoint)
    : Quadrilateral(firstPoint, secondPoint, thirdPoint, forthPoint) {
}

void Trapezoid::display(){
    cout << "Trapezoid's points" << endl;
    Quadrilateral::display();
}

double Trapezoid::perimeter() {
    return Quadrilateral::perimeter();
}
double Trapezoid::area() {
    Point firstPoint = getFirstPoint();
    Point secondPoint = getSecondPoint();
    Point thirdPoint = getThirdPoint();
    Point fourthPoint = getFourthPoint();

    double firstBase = sideLength(firstPoint, secondPoint);
    double secondBase = sideLength(thirdPoint, fourthPoint);

    double height = abs(thirdPoint.getY() - secondPoint.getY());

    double area = ((firstBase + secondBase) * height) / 2;
    return area;
}