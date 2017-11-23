#ifndef SHAPE2D_H
#define SHAPE2D_H

// A 2D shape has an area, and an virtual setArea function, because it changes based on the object.
class Shape2d
{
protected:
    float area;
public:
    //constructor
    Shape2d();
    Shape2d(float);
    //accessor
    float getArea() const;
    //mutator
    virtual void setArea(float);
    
    float operator+(const Shape2d &) const;
    float operator-(const Shape2d &) const;
};

#endif
