#ifndef POINT_H
#define POINT_H

class Point {
private:
	float x;
	float y;
public:
	Point(float = 0, float = 0);

	void setPoint(float, float);
	float getX();
	float getY();
};
#endif
