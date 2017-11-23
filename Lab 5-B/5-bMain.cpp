// Intro to Classes and Objects
// This program demonstrates composition and operator overloading (including output stream overloading), same as 5-a but with a different class.
// Creates 2 TimeOff / employees, sets their properties and compares them using the overloaded operators and outputs them using the overloaded ostream << operator

#include "NumDays.h"
#include "NumDays.cpp"
#include "TimeOff.h"
#include "TimeOff.cpp"
#include <cmath>

using std::cout;
using std::endl;

int main()
{
	TimeOff employee1;
	TimeOff employee2("Austin", 908, 3, 7, 14);
	TimeOff employee3("Ross", 758, 5, 8, 6);
	
	employee1.setName("Dave");
	employee1.setID(835);
	employee1.setMaxSick(5);
	employee1.setMaxVac(32);
	employee1.setMaxUnpaid(0);
	employee1.setSickTaken(5);
	employee1.setVacTaken(24);
	employee1.setUnpaidTaken(0);
	
	cout << "Employee " << employee1.getID() << ": " << employee1.getName() << " has " << employee1.getMaxSick() - employee1.getSickTaken() << " sick days left, " 
		 << employee1.getMaxVac() - employee1.getVacTaken() << " vacation days left, and " << employee1.getMaxUnpaid() - employee1.getUnpaidTaken() 
		 << " unpaid days left for a total of " << employee1.getTotal() << " days off left." << endl << endl;
		 
	if (employee1 > employee2)
		cout << employee1.getName() << " has more days off left than " << employee2.getName() << endl;
	if (employee1 < employee2)
		cout << employee2.getName() << " has more days off left than " << employee1.getName() << endl;
	if (employee1 == employee2)
		cout << employee1.getName() << " and " << employee2.getName() << " have the same amount of days off left" << endl;
		
	if (employee2 != employee3)
		cout << employee2.getName() << " and " << employee3.getName() << " do not have the same amount of days off left" << endl;
	if (employee2 >= employee3)
		cout << employee3.getName() << " has the same amount of days off left as " << employee2.getName() << " at the most" << endl;
	if (employee2 <= employee3)
		cout << employee2.getName() << " has the same amount of days off left as " << employee3.getName() << " at the most" << endl;
	
	
	
	return 0;
}
