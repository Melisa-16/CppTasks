#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}
double Rectangle::perimeter() {
	double perimeter = 2 * (length + width);
	return perimeter;
}
double Rectangle::area() {
	double area = length * width;
	return area;
}

//set get
double Rectangle::getLength() {
	return length;
}
double Rectangle::getWidth() {
	return width;
}
void Rectangle::setLength(double newLength) {
	length = newLength;
}
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}

//display
void Rectangle::print() {
	cout << "Rectangle" << endl
		<< "Length: " << getLength() << endl
		<< "Width: " << getWidth() << endl
		<< "Perimeter: " << perimeter() << endl
		<< "Area: " << area();
}
void Rectangle::draw(char charToDrawWith) {
	for (int i = 0;i < (int)length;i++) {
		for (int j = 0;j < (int)width;j++) {
			cout << charToDrawWith << " ";
		}
		cout << endl;
	}
}
