#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
	rectangle Rectangle(10, 20);

	cout << "Rectangle width: " << Rectangle.getWidth()
		<< "\nRectangle length: " << Rectangle.getLength() << endl
		<< "Area of rectangle: " << Rectangle.area() << endl
		<< "Perimeter of rectangle: " << Rectangle.perimeter() << endl;

	return 0;
}