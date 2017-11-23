#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape2d.h"

// Circle is a 2d object. Adds a radius variable to the object. The setter also recalculates the area.
class Circle : public Shape2d
{
protected:
    float radius;
public:
    //constructor
    Circle();
    Circle(float);
    //accessor
    float getRadius() const;
    //mutator
    void setRadius(float);
};

#endif
