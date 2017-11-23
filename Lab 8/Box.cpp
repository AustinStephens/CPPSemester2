#include "Shape3d.h"
#include "Rectangle.h"
#include "Box.h"

Box::Box():Rectangle(),Shape3d()
{
    setHeight(0);
}
Box::Box(float h, float l, float w):Rectangle(l,w),Shape3d(l*w*h)
{
    setHeight(h);
}
//accessor
float Box::getHeight() const
{
    return height;
}
//mutator
void Box::setHeight(float h)
{
    if (h < 0)
        h = 0;
    height = h;
    setVolume(getArea() * h);
}

void Box::setArea(float a)
{
	if (a < 0)
        a = 0;
    area = a;
    setVolume(a * getHeight());
}
