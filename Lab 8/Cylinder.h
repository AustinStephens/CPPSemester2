#ifndef CYLINDER_H
#define CYLINDER_H

#include "Shape3d.h"
#include "Circle.h"

// Cylcinder is a 3D version of a circle. Adds height property. Setter recalculates volume, the volume setter recalculates the area and vice versa.
class Cylinder : public Shape3d, public Circle
{
protected:
    float height;
public:
    Cylinder();
    Cylinder(float, float);
    float getHeight() const;
    void setHeight(float);
    virtual void setArea(float);
};



#endif
