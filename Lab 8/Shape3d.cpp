#include "Shape3d.h"

Shape3d::Shape3d()
{
    setVolume(0);
}
Shape3d::Shape3d(float v)
{
    setVolume(v);
}
//accessor
float Shape3d::getVolume() const
{
    return volume;
}
//mutator
void Shape3d::setVolume(float v)
{
    if (v < 0)
        v = 0;
    volume = v;
}

float Shape3d::operator*(const Shape3d &obj) const
{
    return volume + obj.volume;
}
float Shape3d::operator/(const Shape3d &obj) const
{
    return volume - obj.volume;
}
