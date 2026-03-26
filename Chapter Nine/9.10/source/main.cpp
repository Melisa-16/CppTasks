#include <iostream>
#include "Cube.h"

using namespace std;

int main() {
	Cube cube(3, 4, 7);

	cout << "Square is at: (" << cube.getX() << "," << cube.getY() << ")"
		<< endl << "Side: " << cube.getSide() << endl
		<< "Area: " << cube.area() << endl
		<< "Perimeter: " << cube.perimeter() << endl << endl;
	

	cout << "Cube is at: (" << cube.getX() << "," << cube.getY() << ")" << endl
		<< "Side: " << cube.getSide() << endl
		<< "Surface area: " << cube.surfaceArea() << endl
		<< "Volume: " << cube.volume() << endl;

	return 0;
}