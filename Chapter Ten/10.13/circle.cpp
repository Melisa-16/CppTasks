#include "Circle.h"
#include <iostream>

using namespace std;

const double PI_NUMBER = 3.14159;

Circle::Circle(int x, int y, double radius) {
	this->x = x;
	this->y = y;
	this->radius = radius;
}
double Circle::area() {
	double area = PI_NUMBER * radius * radius;
	return area;
}
double Circle::circumference() {
	double circumference = 2 * PI_NUMBER * radius;
	return circumference;
}

double Circle::getRadius() {
	return radius;
}
double Circle::getX() {
	return x;
}
double Circle::getY() {
	return y;
}

void Circle::setRadius(double newRadius) {
	radius = newRadius;
}
void Circle::setX(int newX) {
	x = newX;
}
void Circle::setY(int newY) {
	y = newY;
}
void Circle::print() {
	cout << "Circle: " << endl
		<< "Center: (" << getX() << "," << getY() << ")" << endl
		<< "Area: " << area() << endl
		<< "Circumference: " << circumference();
}
void Circle::draw(char symbol) {
	for (int i = -radius; i <= radius; i++) {
		for (int j = -radius; j <= radius; j++) {
			if (i * i + j * j <= radius * radius) {
				cout << symbol;
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
}