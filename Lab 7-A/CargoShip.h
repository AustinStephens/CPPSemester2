#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "Ship.h"

class CargoShip : public Ship
{
		int maxCargo;
	public:
		//constructor
		CargoShip();
		CargoShip(int);
		CargoShip(string n, string y, int c);
		//accessor
		int getCargo() const;
		//mutators
		void setCargo(int);	
		
		virtual void print() const;	
};

#endif
