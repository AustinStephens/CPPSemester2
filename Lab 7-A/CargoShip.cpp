#include "Ship.h"
#include "CargoShip.h"

//constructor
CargoShip::CargoShip():Ship()
{
	setCargo(0);
}
CargoShip::CargoShip(int c):Ship()
{
	setCargo(c);
}
CargoShip::CargoShip(string n, string y, int c):Ship(n, y)
{
	setCargo(c);
}
//accessor
int CargoShip::getCargo() const
{
	return maxCargo;
}
//mutators
void CargoShip::setCargo(int c)
{
	maxCargo = c;	
}	

void CargoShip::print() const
{
	cout << getName() << " has a cargo capacity of " << getCargo() << " tons" << endl;	
}	
