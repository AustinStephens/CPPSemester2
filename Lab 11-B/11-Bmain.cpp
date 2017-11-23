// Data structures
// This program is the exact same as 11-A except Phone is used as a node in a Circular Linked List instead of a normal Linked List.
// Enter information on phone numbers until you enter 555 as the area code. Once 555 is entered for the area code, all the phone numbers are printed out.

#include "Phone.h"
#include "Phone.cpp"

using std::cin;

int main()
{
	int a,e,n;
	char temp;
	bool unlisted;
	bool flag = true;
	Phone *head = nullptr, *current = nullptr;
	
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
			
			if (!head) // head == nullptr
			{
				head = new Phone(a,e,n,unlisted);
				current = head;
				current->nextVal = head;
			}
			else
			{
				current->nextVal = new Phone(a,e,n,unlisted);
				current = current->nextVal;
				current->nextVal = head;
			}
		}
	}while (a != 555);
		
	current = head;
	if (current) // current != nullptr
	{
		do
		{
			cout << *current << endl;
			current = current->nextVal;
		}while (current != head);
	}
	
	return 0;
}
