// Data structures
// This program uses the Phone class as a node in a linked list.
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
				current->nextVal = nullptr;
			}
			else
			{
				current->nextVal = new Phone(a,e,n,unlisted);
				current = current->nextVal;
				current->nextVal = nullptr;
			}
		}
	}while (a != 555);
		
	current = head;
	while (current) // current != nullptr
	{
		cout << *current << endl;
		current = current->nextVal;
	}
	return 0;
}
