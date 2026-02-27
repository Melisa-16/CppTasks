#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle {
private:
	float length;
	float width;
public:
	rectangle(float = 1, float = 1);
	float perimeter();
	float area();
	void setLength(float);
	void setWidth(float);
	float getLength();
	float getWidth();
};
#endif