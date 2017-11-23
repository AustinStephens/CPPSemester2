#include "Shape2d.h"
#include "Rectangle.h"

//constructor
Rectangle::Rectangle():Shape2d()
{
    setLength(0);
    setWidth(0);
}
Rectangle::Rectangle(float l, float w):Shape2d(l*w)
{
    setLength(l);
    setWidth(w);
}
//accessor
float Rectangle::getLength() const
{
    return length;
}
float Rectangle::getWidth() const
{
    return width;
}
//mutator
void Rectangle::setLength(float l)
{
    if (l < 0)
        l = 0;
    length = l;
    setArea(getWidth() * l);
}
void Rectangle::setWidth(float w)
{
    if (w < 0)
        w = 0;
    width = w;
    setArea(getLength() * w);
}
