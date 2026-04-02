#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"

class Circle {
private:
	float radius;
	Point point;
public:
	Circle(float r = 0.0, float x = 0, float y = 0);
	void setRadius(float);
	void setCenter(float, float);

	float getRadius() const;
	float area() const;

	Point getCenter() const;
};

#endif
