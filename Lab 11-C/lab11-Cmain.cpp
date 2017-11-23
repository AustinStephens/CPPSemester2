// Data structures
// This program is the exact same as 11-A and B except Phone is used as a node C++'s predefined list data type. Uses an iterator to iterate through the list.
// Enter information on phone numbers until you enter 555 as the area code. Once 555 is entered for the area code, all the phone numbers are printed out in order and reversed order.

#include "Phone.h"
#include "Phone.cpp"
#include <list>

using std::list;
using std::cin;

int main()
{
	int a,e,n;
	char temp;
	bool unlisted;
	bool flag = true;
	list<Phone> phones;
	list<Phone>::iterator iter;
	
	do
	{
		cout << "Enter the area code: ";
		cin >> a;
		if (a != 555)
		{
			cout << "Enter the exchange number: ";
			cin >> e;
			cout << "Enter the final 4 digits: ";
			cin >> n;
			cout << "Is it unlisted (Y or N) ";
			cin >> temp;
			
			switch (temp) 
			{
				case 'N':
				case 'n': 
					unlisted = false;
					break;
				default: 
					unlisted = true;
					break;
			}
			
			phones.push_back(Phone(a,e,n,unlisted));
		}
	}while (a != 555);
		
	for (iter = phones.begin(); iter != phones.end(); iter++)
	{
		cout << *iter << endl;
	}
	
	cout << endl << "Reverse Order: " << endl;
	phones.reverse();
	
	for (iter = phones.begin(); iter != phones.end(); iter++)
	{
		cout << *iter << endl;
	}
	return 0;
}
