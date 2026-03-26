#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle(10, 15,  //A
                        15, 15,  //B
                        15, 10,  //C
                        10, 10); //D

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
            << "\nPerimeter: " << rectanglePerimeter << endl;

        cout << "Rectangle: ";
        rectangle.setFillCharacter('-');
        rectangle.setPerimeterCharacter('*');
        rectangle.draw();
    }
    else {
        cout << "It is not a rectangle" << endl;
    }
    return 0;
}