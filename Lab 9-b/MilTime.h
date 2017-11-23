#ifndef MILTIME_H
#define MILTIME_H

#include "Time.h"

class MilTime : public Time
{
private:
	int milHour, milSeconds;
public:
	//constructor
	MilTime() : Time()
	{ 
		setTime(0,0); 
	}
	MilTime(int h, int s) : Time()
	{ 
		setTime(h, s);	
	}
	//accessor
	int getHour() {return milHour;}
	int getStandHr()  {return Time::getHour();}	
	//mutator
	void setTime(int h, int s) 
	{
		milHour = h;
		
		milSeconds = s;
		int m = h % 100;
		setMin(m);
		
		if (h > 2400) throw new BadHour;
		else if (h >= 1300) setHour((h - min)/100 - 12);
		else if (h >= 100) setHour((h - min)/100);
		else if (h >= 0) setHour(12);
		else throw new BadHour;
		
		
		if (s <= 59 && s >= 0) setSec(s);
		else throw new BadSeconds;
	}
	//exception classes
	class BadHour // thrown when the hour value is invalid.
		{ public: string what() { return "Not an acceptable hour value"; }};
	class BadSeconds // thrown when the seconds value is inlvaid.
		{ public: string what() { return "Not an acceptable second value"; }};
	//Added BadMinutes to Time class

};


#endif
