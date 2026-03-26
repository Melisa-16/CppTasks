#ifndef CYLINDR_H
#define CYLINDR_H

#include "Circle.h"

class Cylindr {
private:
	float height;
	Circle circle;
public:
	Cylindr(float h = 0.0, float r = 0.0,
		float x = 0.0, float y = 0.0);

	void setHeight(float);
	void setPoint(float, float);

	float getHeight() const;
	float area() const;
	float volume() const;

	Circle getCircle() const;
	Point getPoint() const;
};
#endif