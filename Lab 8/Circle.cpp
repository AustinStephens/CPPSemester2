#include "Shape2d.h"
#include "Circle.h"

//constructor
Circle::Circle():Shape2d()
{
    setRadius(0);
}
Circle::Circle(float r):Shape2d(r*r*3.14)
{
    setRadius(r);
}
//accessor
float Circle::getRadius() const
{
    return radius;
}
//mutator
void Circle::setRadius(float r)
{
    if (r < 0)
        r = 0;
    radius = r;
    setArea(r * r * 3.14);
}
