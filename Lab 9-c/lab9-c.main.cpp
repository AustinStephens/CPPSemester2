// Intro to Exception Handling
// You enter information on an employee, if the information is invalid the program throws an exception. Afterwards the program will loop back to the beginning if the user wants to.
#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
#include "Employee.cpp"
#include "ProductionWorker.cpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int month, day, year, shift, id;
	string name;
	float payRate;
	char charFlag;
	do
	{
		try
		{
			cout << "What is your name? ";
			getline(cin, name);
			cout << "What is your Employee ID? ";
			cin >> id;
			cout << "What month were you hired? ";
			cin >> month;
			cout << "What day were you hired? ";
			cin >> day;
			cout << "What year were you hired? ";
			cin >> year;
			cout << "What shift do you work? ";
			cin >> shift;
			cout << "What is your hourly pay rate? ";
			cin >> payRate;
			
			ProductionWorker(name, id, month, day, year, shift, payRate);
		}
		catch(ProductionWorker::InvalidHourlyRateOrShift *e)
		{
			cout << e->what() << endl;
		}
		catch(ProductionWorker::InvalidEmpNum *e)
		{
			cout << e->what() << endl;
		}
		catch(ProductionWorker::InvalidDate *e)
		{
			cout << e->what() << endl;
		}
		catch(...)
		{
			cout << "Something bad happened" << endl;
		}
		cout << "Do you want another (Y/N)? ";
		cin >> charFlag;
		cin.ignore();
	}while(charFlag != 'n' && charFlag != 'N');
	
	return 0;
}
