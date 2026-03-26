#ifndef CUBE_H
#define CUBE_H

#include "Square.h"

class Cube : public Square {
public:
    Cube(float = 0, float = 0, float = 0);

    float surfaceArea();
    float volume();
};

#endif