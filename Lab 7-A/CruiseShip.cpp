#include "Ship.h"
#include "CruiseShip.h"

//constructor
CruiseShip::CruiseShip():Ship()
{
	setMax(0);
}
CruiseShip::CruiseShip(int m):Ship()
{
	setMax(m);
}
CruiseShip::CruiseShip(string n, string y, int m):Ship(n, y)
{
	setMax(m);
}
//accessor
int CruiseShip::getMax() const
{
	return maxPassengers;
}
//mutators
void CruiseShip::setMax(int m)
{
	maxPassengers = m;
}

void CruiseShip::print() const
{
	cout << getName() << " has a maximum capacity of " << getMax() << " passengers" << endl;
}
