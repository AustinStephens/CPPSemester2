// Intro to Polymorphism
// Starts off by showing how pointers to objects work, like using -> instead of the dot operator, in relation to virtual members.
// Creates 2 Ships, 3 CargoShips, and 3 CruiseShips and prints out the information on them.

#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"
#include "Ship.cpp"
#include "CargoShip.cpp"
#include "CruiseShip.cpp"

int main()
{
	
	Ship *ship1 = new Ship();
	Ship *ship2 = new Ship("Betty", "1987");
	
	CruiseShip *cruise1 = new CruiseShip();
	CruiseShip *cruise2 = new CruiseShip(780);
	CruiseShip *cruise3 = new CruiseShip("Enterprise", "2005", 850);
	
	CargoShip *cargo1 = new CargoShip();
	CargoShip *cargo2 = new CargoShip(40);
	CargoShip *cargo3 = new CargoShip("Sailor", "1984", 20);
	
	ship1->setName("Docking");
	ship1->setYear("2001");
	
	cruise1->setName("Rocket");
	cruise1->setYear("1999");
	cruise1->setMax(560);
	
	cargo1->setName("Express");
	cargo1->setYear("1996");
	cargo1->setCargo(25);
	
	cout << "First Ship is named " << ship1->getName() << endl
		 << "Second Ship was built in " << ship2->getYear() << endl
		 << "First Cruise Ship can hold " << cruise1->getMax() << " passengers" << endl
		 << "First Cargo Ship can hold " << cargo1->getCargo() << " tons of cargo" << endl;
		 
	ship2->print();
	cruise3->print();
	cargo3->print();
	
	
	
	return 0;
}
