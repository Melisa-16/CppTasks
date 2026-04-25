#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Quadrilateral.h"

class Parallelogram :public Quadrilateral {
public:
	Parallelogram(double, double, double, double, double, double);

	double area() override;
};

#endif