// Intro to Classes and Objects
// This program demonstrates operator overloading (including output stream overloading)
// Creates 2 NumDays / employees, sets their properties and compares them using the overloaded operators and outputs them using the overloaded ostream << operator

#include "NumDays.h"
#include "NumDays.cpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main()
{
	NumDays employee1;
	NumDays employee2(40);
	
	employee1.setHours(40);
	employee2.setDays(4);
	
	cout << "Employee 1 Days: " << employee1.getDays() << endl;
	cout << "Employee 2 Days: " << employee2.getDays() << endl << endl;
	
	employee1++;
	employee2--;
	
	cout << "Employee 1 Hours: " << employee1.getHours() << endl;
	cout << "Employee 2 Hours: " << employee2.getHours() << endl << endl;
	
	++employee1;
	--employee2;
	
	cout << "Employee 1 Days: " << employee1.getDays() << endl;
	cout << "Employee 2 Days: " << employee2.getDays() << endl << endl;
	
	
	
	cout << "Employee 1" << endl;
	cout << employee1 << endl << endl;
	
	cout << "Employee 2" << endl;
	cout << employee2 << endl << endl;
	
	cout << "The sum of both employee's hours: " << employee1 + employee2 << endl;
	cout << "The difference of both employee's hours: " << abs(employee1 - employee2);

	
	
	
	return 0;
}
