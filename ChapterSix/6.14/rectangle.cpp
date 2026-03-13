//A-----B
//|     |
//|     |
//D_____C

#include <iostream>
#include "cmath"
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x1, double y1,
    double x2, double y2,
    double x3, double y3,
    double x4, double y4)
{
    setCoordinates(x1, y1, x2, y2, x3, y3, x4, y4);
}

void Rectangle::setCoordinates(double x1, double y1,
    double x2, double y2,
    double x3, double y3,
    double x4, double y4)
{
    this->x1 = (x1 >= 0 && x1 <= 20.0) ? x1 : 0;
    this->y1 = (y1 >= 0 && y1 <= 20.0) ? y1 : 0;

    this->x2 = (x2 >= 0 && x2 <= 20.0) ? x2 : 0;
    this->y2 = (y2 >= 0 && y2 <= 20.0) ? y2 : 0;

    this->x3 = (x3 >= 0 && x3 <= 20.0) ? x3 : 0;
    this->y3 = (y3 >= 0 && y3 <= 20.0) ? y3 : 0;

    this->x4 = (x4 >= 0 && x4 <= 20.0) ? x4 : 0;
    this->y4 = (y4 >= 0 && y4 <= 20.0) ? y4 : 0;
}

bool Rectangle::rectangleChecker()
{
    //vectors
    double ABx = x2 - x1;
    double ABy = y2 - y1;

    double BCx = x3 - x2;
    double BCy = y3 - y2;

    double CDx = x4 - x3;
    double CDy = y4 - y3;

    double ADx = x4 - x1;
    double ADy = y4 - y1;

    double scalarProduct1 = ABx * BCx + ABy * BCy;
    double scalarProduct2 = BCx * CDx + BCy * CDy;
    double scalarProduct3 = CDx * ADx + CDy * ADy;
    double scalarProduct4 = ADx * ABx + ADy * ABy;

    if (scalarProduct1 == 0 &&
        scalarProduct2 == 0 &&
        scalarProduct3 == 0 &&
        scalarProduct4 == 0)
    {
        return true;
    }

    return false;
}
bool Rectangle::squareChecker() {
    if (width == length) {
        return true;
    }
    return false;
}

double Rectangle::distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void Rectangle::setLength() {
    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    length = (side1 > side2) ? side1 : side2;
}
void Rectangle::setWidth() {
    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    width = (side1 > side2) ? side2 : side1;
}
double Rectangle::getLength() {
    return length;
}
double Rectangle::getWidth() {
    return width;
}

double Rectangle::area() {
    double rectangleArea = length * width;
    return rectangleArea;
}
double Rectangle::perimeter() {
    double rectanglePerimeter = 2 * (length + width);
    return rectanglePerimeter;
}

double Rectangle::minimum(double firstNumber,double secondNumber,double thirdNumber,double forthNumber) {
    double minimumNumber = firstNumber;

    if (secondNumber < minimumNumber) {
        minimumNumber = secondNumber;
    }else if (thirdNumber < minimumNumber) {
        minimumNumber = thirdNumber;
    }
    else if (forthNumber < minimumNumber) {
        minimumNumber = forthNumber;
    }

    return minimumNumber;
}

double Rectangle::maximum(double firstNumber, double secondNumber, double thirdNumber, double forthNumber) {
    double maximumNumber = firstNumber;

    if (secondNumber > maximumNumber) {
        maximumNumber = secondNumber;
    }
    else if (thirdNumber > maximumNumber) {
        maximumNumber = thirdNumber;
    }
    else if (forthNumber > maximumNumber) {
        maximumNumber = forthNumber;
    }

    return maximumNumber;
}

void Rectangle::setFillCharacter(char character) {
    fillCharacter = character;
}
void Rectangle::setPerimeterCharacter(char character) {
    perimeterCharacter = character;
}
void Rectangle::draw() {
    double maximumX = maximum(x1, x2, x3, x4);
    double minimumX = minimum(x1, x2, x3, x4);

    double maximumY = maximum(y1, y2, y3, y4);
    double minimumY = minimum(y1, y2, y3, y4);

    const int BOARD_SIZE = 25;
    
    for (int y = 0;y < BOARD_SIDE;y++) {
        for (int x = 0;x < BOARD_SIZE;x++) {

            if ((x >= minimumX && x <= maximumX && y == minimumY) ||
                (x >= minimumX && x <= maximumX && y == maximumY) ||
                (y >= minimumY && y <= maximumY && x == minimumX) ||
                (y >= minimumY && y <= maximumY && x == maximumX))
            {
                cout << perimeterCharacter;
            }
            else if (x > minimumX && x < maximumX && y > minimumY && y < maximumY) {
                cout << fillCharacter;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
