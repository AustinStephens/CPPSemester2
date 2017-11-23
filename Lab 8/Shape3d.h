#ifndef SHAPE3D_H
#define SHAPE3D_H

// A 3D shape has a volume property.
class Shape3d
{
protected:
    float volume;
public:
    Shape3d();
    Shape3d(float);
    //accessor
    float getVolume() const;
    //mutator
    void setVolume(float);
    
    float operator*(const Shape3d &) const;
    float operator/(const Shape3d &) const;
};

#endif
