#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "Cube.h"
#include "Cuboid.h"
#include "Sphere.h"
#include "Cylinder.h"
#include "Cone.h"

using namespace std;

int main() {
    //2D Shapes
    Triangle triangle(6, 4);
    Square square(5);
    Rectangle rectangle(8, 3);
    Circle circle(7);
    Trapezoid trapezoid(6, 10, 4);

    cout << "----- Two Dimensional Shapes -----" << endl;

    cout << "Triangle area: " << triangle.area() << endl;
    cout << "Triangle volume: " << triangle.volume() << endl << endl;

    cout << "Square area: " << square.area() << endl;
    cout << "Square volume: " << square.volume() << endl << endl;

    cout << "Rectangle area: " << rectangle.area() << endl;
    cout << "Rectangle volume: " << rectangle.volume() << endl << endl;

    cout << "Circle area: " << circle.area() << endl;
    cout << "Circle volume: " << circle.volume() << endl << endl;

    cout << "Trapezoid area: " << trapezoid.area() << endl;
    cout << "Trapezoid volume: " << trapezoid.volume() << endl << endl;

    // 3D Shapes 
    Cube cube(4);
    Cuboid cuboid(6, 4, 3);
    Sphere sphere(5);
    Cylinder cylinder(3, 7);
    Cone cone(3, 4);

    cout << "----- Three Dimensional Shapes -----" << endl;

    cout << "Cube area: " << cube.area() << endl;
    cout << "Cube volume: " << cube.volume() << endl << endl;

    cout << "Cuboid area: " << cuboid.area() << endl;
    cout << "Cuboid volume: " << cuboid.volume() << endl << endl;

    cout << "Sphere area: " << sphere.area() << endl;
    cout << "Sphere volume: " << sphere.volume() << endl << endl;

    cout << "Cylinder area: " << cylinder.area() << endl;
    cout << "Cylinder volume: " << cylinder.volume() << endl << endl;

    cout << "Cone area: " << cone.area() << endl;
    cout << "Cone volume: " << cone.volume() << endl << endl;

    return 0;
}