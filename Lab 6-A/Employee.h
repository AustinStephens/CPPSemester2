#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

using std::string;

class Employee
{
	private: 
		string name;
		int employeeID;
		int hireMonth;
		int hireDay;
		int hireYear;	
	public:
		Employee();
		Employee(string, int);
		Employee(string, int, int, int, int);
		//accessors
		string getName() const;
		int getID() const;
		int getMonth() const;
		int getDay() const;
		int getYear() const;
		//mutators
		void setName(string);
		void setID(int);
		void setMonth(int);
		void setDay(int);
		void setYear(int);
};





#endif
