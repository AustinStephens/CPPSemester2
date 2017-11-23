#ifndef TIME_H
#define TIME_H

#include <string>

using std::string;

class Time
{
protected:
	int hour, min, sec;
public:
	//constructor
	Time()
	{ 
		setHour(0); 
		setMin(0); 
		setSec(0); 
	}
	Time(int h, int m, int s)
	{ 
		setHour(h); 
		setMin(m); 
		setSec(s);	
	}
	//accessor
	int getHour() {return hour;}
	int getMin()  {return min;}
	int getSec()  {return sec;}	
	//mutator
	void setHour(int h) 
	{
		hour = h;
	}
	void setMin(int m)
	{
		if (m > 59 || m < 0) throw new BadMinute;
		else min = m;
	}
	void setSec(int s)
	{
		sec = s;
	}
	// Thrown when the minute value is invalid.
	class BadMinute
		{ public: string what() { return "Not an acceptable minute value"; }};
};


#endif
