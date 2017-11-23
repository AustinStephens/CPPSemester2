// Intro to Classes and Objects
// Uses an inline car class to introduce classes and specifically condition checks in the setters (brake in this case)

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Car
{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		Car(int, string);
		void getModel() const;
		void getMake() const;
		void getSpeed() const;
		void accel();
		void brake();
};

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
