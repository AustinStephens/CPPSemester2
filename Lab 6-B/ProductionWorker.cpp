//*********************************************************
//        Production Worker Methods                       *
//*********************************************************

#include "Employee.h"
#include "ProductionWorker.h"

ProductionWorker::ProductionWorker():Employee()
{
	setShift(1);
	setPay(8.50);
}
ProductionWorker::ProductionWorker(int s, float pr):Employee()
{
	setShift(s);
	setPay(pr);
}

ProductionWorker::ProductionWorker(string n , int id, int m, int d, int y, int s, float pr):Employee(n,id,m,d,y)
{
	setShift(s);
	setPay(pr);
}
//accessors
float ProductionWorker::getPay() const
{
	return payRate;
}
int ProductionWorker::getShift() const
{
	return shift;
}
//mutators
void ProductionWorker::setPay(float pr)
{
	if (pr >= 0)
		payRate = pr;
	else
		payRate = 8.50;
}
void ProductionWorker::setShift(int s)
{
	if (s > 0 && s < 3)
		shift = s;
	else
		shift = 1;
}
