// Intro to Exception Handling
// Converts a military time to standard AM/PM time. If the time entered is invalid throws and exception. Enter the military time as HHMM

#include <iostream>
#include "Time.h"
#include "MilTime.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int hour, sec;
	char charFlag;	
	do
	{
		try
		{
			cout << "Enter the time in military format: ";
			cin >> hour;
			cout << "Enter the seconds in military format: ";
			cin >> sec;
			
			MilTime mil1(hour, sec);
			
			cout << "Time in Military Format: " << mil1.getHour() << " hours " << mil1.getSec() << " seconds" << endl;
			cout << "Time in Standard Format: " << mil1.getStandHr() << " hours " << mil1.getMin()
				 << " minutes " << mil1.getSec() << " seconds" << endl;
		}
		catch(MilTime::BadMinute *e)
		{
			cout << e->what() << endl;
		}
		catch(MilTime::BadHour *e)
		{
			cout << e->what() << endl;
		}
		catch(MilTime::BadSeconds *e)
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
