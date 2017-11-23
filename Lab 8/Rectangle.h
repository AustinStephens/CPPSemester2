#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape2d.h"

// Rectangle adds a length and width property. The setters also recalculate the area.
class Rectangle : public Shape2d
{
protected:
    float length;
    float width;
public:
    //constructor
    Rectangle();
    Rectangle(float, float);
    //accessor
    float getLength() const;
    float getWidth() const;
    //mutator
    void setLength(float);
    void setWidth(float);
};

#endif
