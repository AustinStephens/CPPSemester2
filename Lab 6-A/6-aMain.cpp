// Intro to Inheritance
// This program introduces inheritance and multiple constructors.
// Creates 3 employee objects all using different constructors. Then creates 3 ProductionWorker objects using all different constructors. Outputs information on all the workers.

#include <iomanip>
#include "Employee.h"
#include "ProductionWorker.h"
#include "Employee.cpp"
#include "ProductionWorker.cpp"

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
	Employee emp1;
	emp1.setDay(5);
	emp1.setMonth(2);
	emp1.setYear(2016);
	emp1.setID(785);
	emp1.setName("Jerry");
	
	Employee emp2("James", 809);
	Employee emp3("Jack", 714, 8, 21, 2015);
	
	cout << emp2.getName() << " is Employee #" << emp2.getID() << endl;
	cout << emp1.getName() << " was hired on " << emp1.getMonth() << "/" << emp1.getDay() << "/" << emp1.getYear() << endl;
	cout << emp3.getName() << " was hired on " << emp3.getMonth() << "/" << emp3.getDay() << "/" << emp3.getYear() << endl;
	
	ProductionWorker worker1;
	ProductionWorker worker2(2, 10.50);
	ProductionWorker worker3("Jeff", 691, 9, 18, 2016, 1, 15.25);
	
	worker1.setPay(8.50);
	worker1.setShift(3);
	worker1.setName("Jimmy");
	
	cout << fixed << setprecision(2) << worker1.getName() << " works " << worker1.getShift() << ((worker1.getShift() == 1) ? "st" : "nd") << " shift at $" 
		 << worker1.getPay() << " an hour" << endl;
	cout << "Worker 2 works " << worker2.getShift() << ((worker2.getShift() == 1) ? "st" : "nd") << " shift at $" 
		 << worker2.getPay() << " an hour" << endl;
	cout << "Employee #" << worker3.getID() << "- " << worker3.getName() << " works " << worker3.getShift() << ((worker3.getShift() == 1) ? "st" : "nd")
		 << " shift at $" << worker3.getPay() << " an hour and was hired on " << worker3.getMonth() << "/" << worker3.getDay() << "/" << worker3.getYear() << endl;
	
	
	return 0;
}
