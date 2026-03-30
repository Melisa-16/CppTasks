#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	double radius;
	int x;
	int y;
public:
	Circle(int, int, double);
	double area();
	double circumference();

	double getRadius();
	double getX();
	double getY();
	
	void setRadius(double);
	void setX(int);
	void setY(int);

	void print();
	void draw(char);
};
#endif