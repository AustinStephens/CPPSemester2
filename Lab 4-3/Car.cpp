#include "Car.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;


Car::Car(int year, string m)
{
	yearModel = year;
	make = m;
	speed = 0;
}

void Car::getMake() const
{
	cout << make << endl;
}

void Car::getModel() const
{
	cout << yearModel << endl;
}

void Car::getSpeed() const
{
	cout << speed << " mph" << endl;
}

void Car::accel()
{
	speed += 5;
}

void Car::brake()
{
	if ((speed - 5) >= 0) 
		speed -= 5;
	else 
		speed = 0;
}

