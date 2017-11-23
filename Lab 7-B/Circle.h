#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape
{
		long centerX;
		long centerY;
		float radius;
	public:
		Circle(long x, long y, float r)
		{
			setCenterX(x);
			setCenterY(y);
			setRadius(r);
			calcArea();
		}
		
		long getCenterX() const
			{ return centerX; }
		long getCenterY() const
			{ return centerY; }
		float getRadius() const
			{ return radius; }
		
		void setCenterX(long x)
		{
				centerX = x;
		}
		void setCenterY(long y)
		{ 
				centerY = y;
		}
		void setRadius(float r)
		{
			if (r > 0)
				radius = r;
			else
				radius = 0;
			calcArea();
		}
		
		virtual void calcArea()
		{
			setArea(3.14159 * static_cast<float>(radius * radius));
		}	
};

#endif
