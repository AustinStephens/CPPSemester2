#include "Shape3d.h"
#include "Circle.h"
#include "Cylinder.h"
 
Cylinder::Cylinder():Circle(),Shape3d()
{
	setHeight(0);
}
Cylinder::Cylinder(float r, float h):Circle(r),Shape3d(r*r*3.14*h)
{
	setHeight(h);
}
float Cylinder::getHeight() const
{
	return height;
}
void Cylinder::setHeight(float h)
{
    if (h < 0)
        h = 0;
    height = h;
    setVolume(getArea() * h);
}
void Cylinder::setArea(float a)
{
	if (a < 0)
        a = 0;
    area = a;
    setVolume(a * getHeight());
}
