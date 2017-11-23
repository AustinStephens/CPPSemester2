// Intro to Multiple Inheritance
// Creates 3 Rectangle, Circle, Cylinder, and Box objects. Shape2D and Shape3D overload the mathematical operators. Outputs various combinations of using the operators with other objects.

#include "Shape2d.h"
#include "Shape2d.cpp"
#include "Shape3d.h"
#include "Shape3d.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "Box.h"
#include "Box.cpp"
#include "Cylinder.h"
#include "Cylinder.cpp"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Rectangle rect1(4,6);
    Rectangle rect2(7,3);
    Rectangle rect3(9,1);
    
    Circle circ1(5);
    Circle circ2(3);
    Circle circ3(2);
    
    Box box1(5,6,7);
    Box box2(2,4,7);
    Box box3(8,16,1);
    
    Cylinder cyl1(4,5);
    Cylinder cyl2(6,2);
    Cylinder cyl3(8,4);
    
    cout << circ1 + circ2 << endl;
    cout << rect2 + rect3 << endl;
    cout << rect2 + circ3 << endl;
    cout << circ3 - circ2 << endl;
    cout << rect1 - rect2 << endl;
    cout << rect3 - circ1 << endl;
    cout << box1 + box2 << endl;
    cout << rect1 + box2 << endl;
    cout << box3 + circ1 << endl;
    cout << box2 - circ3 << endl;
    cout << rect2 - box1 << endl;
    cout << box3 - circ2 << endl;
    cout << cyl1 + cyl3 << endl;
    cout << rect1 + cyl3 << endl;
    cout << cyl2 + circ1 << endl;
    cout << cyl2 - circ1 << endl;
    cout << rect1 - cyl3 << endl;
    cout << rect3 - cyl1 << endl;
    
    cout << box1 * box2 << endl;
    cout << cyl1 * cyl3 << endl;
    cout << box3 * cyl2 << endl;
    cout << box3 / box2 << endl;
    cout << cyl1 / cyl1 << endl;
    cout << box2 / cyl3 << endl;  
    
    
    return 0;
}
