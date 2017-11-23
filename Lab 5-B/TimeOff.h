#ifndef TIMEOFF_H
#define TIMEOFF_H

#include <string>
#include "NumDays.h"

using std::string;

class TimeOff
{
	private:
		int employeeID;
		string name;
		NumDays maxSickDays;
		NumDays sickTaken;
		NumDays maxVacation;
		NumDays vacTaken;
		NumDays maxUnpaid;
		NumDays unpaidTaken;
	public:
		TimeOff();
		TimeOff(string, int, float, float, float);
		float getMaxSick() const;
		float getSickTaken() const;
		float getMaxVac() const;
		float getVacTaken() const;
		float getMaxUnpaid() const;
		float getUnpaidTaken() const;
		string getName() const;
		int getID() const;
		
		void setMaxSick(float);
		void setSickTaken(float);
		void setMaxVac(float);
		void setVacTaken(float);
		void setMaxUnpaid(float);
		void setUnpaidTaken(float);
		void setName(string);
		void setID(int);
		
		float getTotal() const;
		
		bool operator> (const TimeOff &);
		bool operator< (const TimeOff &);
		bool operator>= (const TimeOff &);
		bool operator<= (const TimeOff &);
		bool operator!= (const TimeOff &);
		bool operator== (const TimeOff &);
		
};

#endif
