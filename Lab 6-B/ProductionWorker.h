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
};





#endif
