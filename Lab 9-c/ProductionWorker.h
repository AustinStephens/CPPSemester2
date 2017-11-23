#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee
{
	private: 
		int shift;
		float payRate;	
	public:
		ProductionWorker();
		ProductionWorker(int, float);
		ProductionWorker(string, int, int, int, int, int, float);
		//accessors
		float getPay() const;
		int getShift() const;
		//mutators
		void setPay(float);
		void setShift(int);
		//exception class
		class InvalidHourlyRateOrShift { // thrown when the shift or rate is invalid. Shift is 1-2, pay rate cannot be negative.
			public: string what() {return "Invalid Rate or Shift";}
		};
};





#endif
