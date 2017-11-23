#ifndef BOX_H
#define BOX_H

#include "Shape3d.h"
#include "Rectangle.h"

// Box is a 3D version of a Rectangle. Adds a height variable the object, the 3rd dimension. Setters recalculate volume, the volume setter recalculates the area and vice versa.
class Box : public Shape3d, public Rectangle
{
protected:
    float height;
public:
    Box();
    Box(float, float, float);
    //accessor
    float getHeight() const;
    //mutator
    void setHeight(float);
    //mutator
    virtual void setArea(float);
};

#endif
