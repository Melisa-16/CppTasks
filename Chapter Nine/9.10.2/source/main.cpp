#include <iostream>
#include "Point.h"
#include "Square.h"
#include "Cube.h"

using namespace std;

int main() {
    Cube cube(1.0, 2.0, 3.0);

    cout << "X = " << cube.getPoint().getX() << endl
        << "Y = " << cube.getPoint().getY() << endl;

    cout << "Cube:" << endl;
    cout << "Side: " << cube.getSquare().getSide() << endl;
    cout << "Base square area: " << cube.getSquare().area() << endl;
    cout << "Surface area: " << cube.surfaceArea() << endl;
    cout << "Volume: " << cube.volume() << endl;

    return 0;
}