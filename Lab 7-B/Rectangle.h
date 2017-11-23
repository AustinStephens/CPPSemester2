#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape
{
		long width;
		long height;
	public:
		Rectangle(long w, long h)
		{
			setWidth(w);
			setHeight(h);
			calcArea();
		}
		
		long getWidth() const
			{ return width; }
		long getHeight() const
			{ return height; }
		
		void setHeight(long h)
		{
			if (h > 0)
				height = h;
			else
				height = 0;
				
			calcArea();
		}
		void setWidth(long w)
		{ 
			if (w > 0)
				width = w;
			else
				width = 0;
				
			calcArea();
		}
		
		virtual void calcArea()
		{
			setArea(width * height);
		}	
};

#endif
