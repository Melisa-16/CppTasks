#include "Quadrilateral.h"
#include <cmath>

Quadrilateral::Quadrilateral(Point firstPoint, Point secondPoint, Point thirdPoint,Point fourthPoint) {
    this->firstPoint = firstPoint;
    this->secondPoint = secondPoint;
    this->thirdPoint = thirdPoint;
    this->fourthPoint = fourthPoint;
}

Point Quadrilateral::getFirstPoint(){
    return firstPoint;
}

Point Quadrilateral::getSecondPoint() {
    return secondPoint;
}
Point Quadrilateral::getThirdPoint() {
    return thirdPoint;
}

Point Quadrilateral::getFourthPoint() {
    return fourthPoint;
}

void Quadrilateral::display(){
    cout << "(" << firstPoint.getX() << ", " << firstPoint.getY() << ")" << endl;
    cout << "(" << secondPoint.getX() << ", " << secondPoint.getY() << ")" << endl;
    cout << "(" << thirdPoint.getX() << ", " << thirdPoint.getY() << ")" << endl;
    cout << "(" << fourthPoint.getX() << ", " << fourthPoint.getY() << ")" << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
double Quadrilateral::sideLength(Point firstPointsPair, Point secondPointsPair) {
    double side = sqrt(pow(secondPointsPair.getX() - firstPointsPair.getX(), 2) + pow(secondPointsPair.getY() - firstPointsPair.getY(), 2));
    return side;
}
double Quadrilateral::perimeter() {
    double side1 = sideLength(firstPoint, secondPoint);
    double side2 = sideLength(secondPoint, thirdPoint);
    double side3 = sideLength(thirdPoint, fourthPoint);
    double side4 = sideLength(fourthPoint, firstPoint);

    double perimeter = side1 + side2 + side3 + side4;
    return perimeter;
}