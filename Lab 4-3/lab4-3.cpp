// Intro to Classes and Objects
// Same lab4-2, but this time its including an external class header and cpp file.

#include "Car.h"
#include "Car.cpp"

using std::cout;
using std::endl;

int main()
{
	Car car1(2000, "Dodge Ram");
	car1.getModel();
	car1.getMake();
	
	car1.accel();
	car1.getSpeed();
	
	car1.accel();
	car1.getSpeed();
	
	car1.accel();
	car1.getSpeed();
	
	car1.accel();
	car1.getSpeed();
	
	car1.accel();
	car1.getSpeed();
	
	car1.brake();
	car1.getSpeed();
	
	car1.brake();
	car1.getSpeed();
	
	car1.brake();
	car1.getSpeed();
	
	car1.brake();
	car1.getSpeed();
	
	car1.brake();
	car1.getSpeed();
	
	return 0;
}
