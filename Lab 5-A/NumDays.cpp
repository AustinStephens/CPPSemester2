#include "NumDays.h"
#include "TimeOff.h"
#include <iostream>

using std::ostream;

NumDays::NumDays()
{
	setHours(0);
}
	
NumDays::NumDays(float num)
{
	setHours(num);
}

void NumDays::setHours(float num)
{
	if (num >= 0)
	{
		hours = num;
		days = hours / 8;
	}
	else
	{
		hours = 0;
		days = 0;
	}
}

void NumDays::setDays(float num)
{
	setHours(num * 8.0);
}

float NumDays::getHours () const
{
	return hours;
}

float NumDays::getDays() const
{
	return days;
}

NumDays NumDays::operator++()
{
	setHours(hours + 1);
	return *this;
}

NumDays NumDays::operator++(int)
{
	NumDays temp(hours);
	setHours(hours + 1);
	return temp;
}

NumDays NumDays::operator--()
{
	setHours(hours - 1);
	return *this;
}

NumDays NumDays::operator--(int)
{
	NumDays temp(hours);
	setHours(hours - 1);
	return temp;
}

float NumDays::operator+(const NumDays &obj) const
{
	NumDays temp(hours + obj.hours);
	return temp.hours;
}
	
float NumDays::operator-(const NumDays &obj) const
{
	NumDays temp(hours - obj.hours);
	return temp.hours;
}

ostream &operator << (ostream &stream, const NumDays &obj)
{
	stream << "Work Days " << obj.getDays() << " and Work Hours " << obj.getHours();
	return stream;
}


