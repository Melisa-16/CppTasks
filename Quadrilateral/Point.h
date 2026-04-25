#ifndef POINT_H
#define POINT_H

class Point {
private:
	double x;
	double y;
public:
	Point(double, double);

	void print();
	void setX(double);
	void setY(double);

	double getX();
	double getY();
};
#endif
