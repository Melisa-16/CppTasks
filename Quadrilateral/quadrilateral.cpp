//A----B
//|    |
//|    |
//D----C

#include "Quadrilateral.h"
#include "Point.h"
#include <cmath>

Quadrilateral::Quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3)
    : firstPoint(x1, y1),
    secondPoint(x2, y2),
    thirdPoint(x3, y3),
    fourthPoint(x1 + x3 - x2, y1 + y3 - y2)
{
}

double Quadrilateral::calculateSide(double x1, double y1, double x2, double y2) {
   return side = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

Point Quadrilateral::getFirstPoint() {
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

double Quadrilateral::perimeter() {
    double perimeter = 0;

    double firstSide = calculateSide(firstPoint.getX(), firstPoint.getY(), secondPoint.getX(), secondPoint.getY());
    double secondSide = calculateSide(secondPoint.getX(), secondPoint.getY(), thirdPoint.getX(), thirdPoint.getY());
    double thirdSide = calculateSide(thirdPoint.getX(), thirdPoint.getY(), fourthPoint.getX(), fourthPoint.getY());
    double fourthSide = calculateSide(fourthPoint.getX(), fourthPoint.getY(), firstPoint.getX(), firstPoint.getY());

    perimeter = firstSide + secondSide + thirdSide + fourthSide;
    return perimeter;
}
