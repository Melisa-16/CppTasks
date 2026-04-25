#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"

using namespace std;

int main() {
	Rectangle rectangle(3, 4, 8, 4, 8, 6);

	Point A = rectangle.getFirstPoint();
	Point B = rectangle.getSecondPoint();
	Point C = rectangle.getThirdPoint();
	Point D = rectangle.getFourthPoint();

	cout << "Points of rectangle:" << endl
		<< "A: ";
		A.print();
		cout << endl << "B: ";
		B.print();
		cout << endl << "C: ";
		C.print();
		cout << endl << "D: ";
		D.print();

	cout << "\nPerimeter: ";
	double rectanglePerimeter = rectangle.perimeter();
	cout << rectanglePerimeter;

	cout << "\nArea: ";
	double rectangleArea = rectangle.area();
	cout << rectangleArea;

	Square square(3, 4, 6, 4, 6, 7);

	Point A2 = square.getFirstPoint();
	Point B2 = square.getSecondPoint();
	Point C2 = square.getThirdPoint();
	Point D2 = square.getFourthPoint();

	cout << endl << endl << "Points of square: "
		<< endl << "A: ";
	A2.print();
	cout << endl << "B: ";
	B2.print();
	cout << endl << "C: ";
	C2.print();
	cout << endl << "D: ";
	D2.print();

	cout << endl << "Area: ";
	double squareArea = square.area();
	cout << squareArea;

	cout << endl << "Perimeter: ";
	double squarePerimeter = square.perimeter();
	cout << squarePerimeter;

	Parallelogram parallelogram(2, 5, 7, 5, 6, 1);

	Point A3 = parallelogram.getFirstPoint();
	Point B3 = parallelogram.getSecondPoint();
	Point C3 = parallelogram.getThirdPoint();
	Point D3 = parallelogram.getFourthPoint();

	cout << endl << endl << "Points of parallelogram: "
		<< endl << "A: ";
	A3.print();
	cout << endl << "B: ";
	B3.print();
	cout << endl << "C: ";
	C3.print();
	cout << endl << "D: ";
	D3.print();

	cout << endl << "Area: ";
	double parallelogramArea = parallelogram.area();
	cout << parallelogramArea;

	cout << endl << "Perimeter: ";
	double parallelogramPerimeter = parallelogram.perimeter();
	cout << parallelogramPerimeter;

	return 0;
}