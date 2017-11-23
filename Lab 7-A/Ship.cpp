#include "Ship.h"

//constructor
Ship::Ship()
{
	setName("");
	setYear("");
}

Ship::Ship(string n, string y)
{
	setName(n);
	setYear(y);
}
//accessor
string Ship::getName() const
{
	return name;
}

string Ship::getYear() const
{
	return year;
}
//mutators
void Ship::setName(string n)
{
	name = n;
}

void Ship::setYear(string y)
{
	year = y;
}

void Ship::print() const
{
	cout << getName() << " was built in " << getYear() << endl;
}	
