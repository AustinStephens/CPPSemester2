#ifndef CAR_H
#define CAR_H

#include <string>
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

#endif
