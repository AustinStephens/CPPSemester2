#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"

class CruiseShip : public Ship
{
		int maxPassengers;
	public:
		//constructor
		CruiseShip();
		CruiseShip(int);
		CruiseShip(string n, string y, int m);
		//accessor
		int getMax() const;
		//mutators
		void setMax(int);
		
		virtual void print() const;	
};

#endif
