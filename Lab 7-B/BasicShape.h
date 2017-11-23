#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape
{
		float area;
	public:
		int getArea() const
			{ return area; }
		void setArea(float a)
			{ area = a; }
	
		
		virtual void calcArea() = 0;	
};

#endif
