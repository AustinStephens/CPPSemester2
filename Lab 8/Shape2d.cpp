#include "Shape2d.h"

//constructor
Shape2d::Shape2d()
{
    setArea(0);
}
Shape2d::Shape2d(float a)
{
    setArea(a);
}
//accessor
float Shape2d::getArea() const
{
    return area;
}
//mutator
void Shape2d::setArea(float a)
{
    if (a < 0)
        a = 0;
    area = a;
}

float Shape2d::operator+(const Shape2d &obj) const
{
    return obj.getArea() + area;
}
float Shape2d::operator-(const Shape2d &obj) const
{
    return area - obj.getArea();
}
