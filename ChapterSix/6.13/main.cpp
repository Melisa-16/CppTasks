#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
	Rectangle rectangle( 1, 5,  //A
                         5, 5,  //B
                         5, 1,  //C
                         1, 1); //D

    if (rectangle.rectangleChecker() == true) {
        rectangle.setLength();
        rectangle.setWidth();

        if (rectangle.squareChecker() == true) {
            cout << "It is both rectangle and square";
        }
        else {
            cout << "It is rectangle";
        }
        double rectangleLength = rectangle.getLength();
        double rectangleWidth = rectangle.getWidth();
        double rectangleArea = rectangle.area();
        double rectanglePerimeter = rectangle.perimeter();

        cout << "\nLength: " << rectangleLength
            << "\nWidht: " << rectangleWidth
            << "\nArea: " << rectangleArea
            << "\nPerimeter: " << rectanglePerimeter;
    }
    else {
        cout << "It is not a rectangle" << endl;
    }
    return 0;
}