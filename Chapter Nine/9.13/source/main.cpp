#include <iostream>
#include "Quadrilateral.h"
#include "Trapezoid.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {

    Quadrilateral quadrilateral(Point(0, 0), Point(4, 0), Point(5, 3), Point(1, 3));
    Trapezoid trapezoid(Point(0, 0), Point(6, 0), Point(4, 3), Point(1, 3));
    Parallelogram parallelogram(Point(0, 0), Point(4, 0), Point(6, 3), Point(2, 3));
    Rectangle rectangle(Point(0, 0), Point(5, 0), Point(5, 3), Point(0, 3));
    Square square(Point(0, 0), Point(4, 0), Point(4, 4), Point(0, 4));

    cout << "------------------" << endl;
    cout << "Quadrilateral points:" << endl;
    quadrilateral.display();

    cout << "\n------------------" << endl;
    trapezoid.display();
    cout << "Area: " << trapezoid.area() << endl;

    cout << "\n------------------" << endl;
    parallelogram.display();
    cout << "Area: " << parallelogram.area() << endl;

    cout << "\n------------------" << endl;
    rectangle.display();
    cout << "Area: " << rectangle.area() << endl;

    cout << "\n------------------" << endl;
    square.display();
    cout << "Area: " << square.area() << endl;

    return 0;
}