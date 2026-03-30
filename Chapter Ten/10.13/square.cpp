#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(double side) {
	this->side = side;
}
double Square::perimeter() {
	double perimeter = 4 * side;
	return perimeter;
}
double Square::area() {
	double area = side * side;
	return area;
}

double Square::getSide() {
	return side;
}
void Square::setSide(double newSide) {
	side = newSide;
}

void Square::print() {
	cout << "Square" << endl
		<< "Side: " << getSide() << endl
		<< "Perimeter: " << perimeter() << endl
		<< "Area: " << area();
}
void Square::draw(char charToDrawWith) {
	for (int i = 0;i < (int)side;i++) {
		for (int j = 0;j < (int)side;j++) {
			cout << charToDrawWith << " ";
		}
		cout << endl;
	}
}