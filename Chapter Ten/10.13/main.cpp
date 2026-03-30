#include <iostream>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "Rectangle.h"
#include "Square.h"
#include "RightAngleTriangle.h"
#include "Circle.h"

using namespace std;

int main() {

	int figureNumber;

	cout << "Enter figure(1 - square,2 - rectangle,3 - right angle triangle,4 - circle): ";
	cin >> figureNumber;

	if (figureNumber == 1) {
		int side;
		char symbol;

		cout << "Enter square side: ";
		cin >> side;

		Square square(side);

		cout << "Enter symbol: ";
		cin >> symbol;

		square.print();
		cout << endl;
		square.draw(symbol);
	}
	else if (figureNumber == 2) {
		int length;
		int width;
		char symbol;

		cout << "Enter length of rectangle: ";
		cin >> length;
		cout << "Enter width of rectangle: ";
		cin >> width;
		cout << "Enter symbol: ";
		cin >> symbol;

		Rectangle rectangle(length, width);
		rectangle.print();
		cout << endl;
		rectangle.draw(symbol);
	}
	else if (figureNumber == 3) {
		double base;
		double height;
		double side1;
		double side2;
		double side3;
		char symbol;

		cout << "Enter base of trangle: ";
		cin >> base;

		cout << "Enter height of triangle: ";
		cin >> height;

		cout << "Enter sides: ";
		cin >> side1 >> side2 >> side3;

		cout << "Enter symbol: ";
		cin >> symbol;

		Triangle triangle(base, height, side1, side2, side3);

		triangle.print();
		cout << endl;
		triangle.draw(symbol);

	}
	else if (figureNumber == 4) {
		double radius;
		int x;
		int y;

		cout << "Enter circle radius: ";
		cin >> radius;

		cout << "Enter center x coordinates: ";
		cin >> x;

		cout << "Enter center y coordinates: ";
		cin >> y;

		Circle circle(x, y, radius);

		circle.print();
		cout << endl;
		circle.draw('*');
	}
	else {
		cout << "Invalid input\n";
	}

	return 0;
}