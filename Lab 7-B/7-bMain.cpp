// Intro to Polymorphism
// Shows how pure virtual functions work (abstract classes/interface).
// Creates a Circle and Rectangle object. Prints out the information on it, calculates the area which is different for each class.

#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	Circle circ1(12, 16, 5);
	Rectangle rect1(4, 6);
	
	circ1.setCenterX(5);
	circ1.setCenterY(-3);
	circ1.setRadius(5);
	
	rect1.setWidth(4);
	rect1.setHeight(4);
	
	cout << "Circle 1 is at (" << circ1.getCenterX() << "," << circ1.getCenterY() << ") has a radius of " << circ1.getRadius() << " and an area of " << circ1.getArea() << endl;
	cout << "Rectangle 1 has a width of " << rect1.getWidth() << " and height " << rect1.getHeight() << " and an area of " << rect1.getArea() << endl;	
	return 0;
}
