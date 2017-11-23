#include "Employee.h"

Employee::Employee()
{
	setName("");
	setID(0);
	setMonth(1);
	setDay(1);
	setYear(2017);
}

Employee::Employee(string n, int id)
{
	setName(n);
	setID(id);
}

Employee::Employee(string n , int id, int m, int d, int y)
{
	setName(n);
	setID(id);
	setMonth(m);
	setDay(d);
	setYear(y);
}
//accessors
string Employee::getName() const
{
	return name;
}
int Employee::getID() const
{
	return employeeID;
}
int Employee::getMonth() const
{
	return hireMonth;
}
int Employee::getDay() const
{
	return hireDay;
}
int Employee::getYear() const
{
	return hireYear;
}
//mutators
void Employee::setName(string n)
{
	name = n;
}
void Employee::setID(int id)
{
	if (id >= 0)
		employeeID = id;
	else
		employeeID = 0;
}
void Employee::setMonth(int m)
{
	
	if (m > 0 && m < 13)
		hireMonth = m;
	else
		hireMonth = 1;
}
void Employee::setDay(int d)
{
	if (d > 0 && d < 32)
		hireDay = d;
	else
		hireDay = 1;
}
void Employee::setYear(int y)
{
	if (y > 1940 && y < 2018)
		hireYear = y;
	else
		hireYear = 2017;
}
		

