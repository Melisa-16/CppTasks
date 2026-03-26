#include <iostream>
#include "Cylindr.h"

using namespace std;

int main() {
  
    Cylindr cylinder(10.0, 5.0, 2.0, 3.0);

    cout << "X = " << cylinder.getPoint().getX() << endl
         << "Y = " << cylinder.getPoint().getY() << endl;

    cout << "Cylinder:" << endl;
    cout << "Height: " << cylinder.getHeight() << endl;
    cout << "Base circle radius: " << cylinder.getCircle().getRadius() << endl;
    cout << "Base circle area: " << cylinder.getCircle().area() << endl;
    cout << "Surface area: " << cylinder.area() << endl;
    cout << "Volume: " << cylinder.volume() << endl;

    cylinder.setPoint(10.0, 15.0);
    cout << "New center: ("
        << cylinder.getPoint().getX() << ", "
        << cylinder.getPoint().getY() << ")" << endl;

    return 0;
}