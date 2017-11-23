//*************************************************************
//            TimeOff Methods                                 *
//*************************************************************

#include "NumDays.h"
#include "TimeOff.h"


//Constructors
TimeOff::TimeOff()
{
	setName("");
	setID(0);
	
	setMaxSick(0);
	setSickTaken(0);
	setMaxVac(0);
	setVacTaken(0);
	setMaxUnpaid(0);
	setUnpaidTaken(0);
}

TimeOff::TimeOff(string n, int id, float sick, float vac, float unpaid)
{
	setName(n);
	setID(id);
	
	setMaxSick(sick);
	setSickTaken(0);
	setMaxVac(vac);
	setVacTaken(0);
	setMaxUnpaid(unpaid);
	setUnpaidTaken(0);
}

// Get Methods

float TimeOff::getMaxSick() const
{
	return maxSickDays.getDays();
}

float TimeOff::getSickTaken() const
{
	return sickTaken.getDays();
}

float TimeOff::getMaxVac() const
{
	return maxVacation.getDays();
}

float TimeOff::getVacTaken() const
{
	return vacTaken.getDays();
}

float TimeOff::getMaxUnpaid() const
{
	return maxUnpaid.getDays();
}

float TimeOff::getUnpaidTaken() const
{
	return unpaidTaken.getDays();
}

string TimeOff::getName() const
{
	return name;
}

int TimeOff::getID() const
{
	return employeeID;
}

// Set Methods

void TimeOff::setMaxSick(float num)
{
	maxSickDays.setDays(num);
}

void TimeOff::setSickTaken(float num)
{
	sickTaken.setDays(num);
}

void TimeOff::setMaxVac(float num)
{
	if (num <= 30)
		maxVacation.setDays(num);
	else
		maxVacation.setDays(30);
}

void TimeOff::setVacTaken(float num)
{
	vacTaken.setDays(num);
}

void TimeOff::setMaxUnpaid(float num)
{
	maxUnpaid.setDays(num);
}

void TimeOff::setUnpaidTaken(float num)
{
	unpaidTaken.setDays(num);
}

void TimeOff::setName(string n)
{
	name = n;
}

void TimeOff::setID(int id)
{
	if (id >= 0)
		employeeID = id;
	else
		employeeID = 0;
}

//Total Method

float TimeOff::getTotal() const
{
	return ((maxSickDays - sickTaken) + (maxVacation - vacTaken) + (maxUnpaid - unpaidTaken));
		
}

//Relational operators

bool TimeOff::operator> (const TimeOff &obj)
{
	bool status;
	
	if (getTotal() > obj.getTotal())
		status = true;
	else
		status = false;
		
	return status;
}

bool TimeOff::operator< (const TimeOff &obj)
{
	bool status;
	
	if (getTotal() < obj.getTotal())
		status = true;
	else
		status = false;
		
	return status;
}

bool TimeOff::operator>= (const TimeOff &obj)
{
	bool status;
	
	if (getTotal() >= obj.getTotal())
		status = true;
	else
		status = false;
		
	return status;
}

bool TimeOff::operator<= (const TimeOff &obj)
{
	bool status;
	
	if (getTotal() <= obj.getTotal())
		status = true;
	else
		status = false;
		
	return status;
}

bool TimeOff::operator!= (const TimeOff &obj)
{
	bool status;
	
	if (getTotal() != obj.getTotal())
		status = true;
	else
		status = false;
		
	return status;
}

bool TimeOff::operator== (const TimeOff &obj)
{
	bool status;
	
	if (getTotal() == obj.getTotal())
		status = true;
	else
		status = false;
		
	return status;
}
