#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
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
		//exception classes
		class InvalidDate { // thrown when the date is invalid. Month is 1-12, day is 1-31, year must be above 2010.
			public: string what() {return "Invalid Date";}
		};
		class InvalidEmpNum { // thrown when the employee number is invalid. Cannot be negative or 0.
			public: string what() {return "Invalid Employee Number";}
		};
};





#endif
