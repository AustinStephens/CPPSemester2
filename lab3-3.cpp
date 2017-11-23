// Intro to Structures
// This program shows a group of parts and how many of each, can add or remove parts, but can't make them more than 30 or less than 0. Can press any non number key to exit.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std::cin;
using std::endl;
using std::left;
using std::setw;

struct Bin
{
	char description[15];
	int parts;
};

void addParts(Bin &);
void removeParts(Bin &);

int main()
{
	char choice;
	bool flag = true;
	int bin;
	int func;

	Bin binlist[10] = {{"Valve", 10}, {"Bearing", 5}, {"Bushing", 15}, {"Coupling", 21}, {"Flange", 7}, {"Gear", 5}, {"Gear Housing", 5}, {"Vacuum Gripper", 25}, {"Cable", 18}, {"Rod", 12}};
	
	while(flag)
	{
		cout << "#  Part             Number of Parts" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << i << ". " << left << setw(17) << binlist[i].description << binlist[i].parts << endl;	
		}
		
		cout << "Press any letter to quit or choose a bin ";
		cin.get(choice);
		
		if(isdigit(choice))  // instead of a switch statement I used this as a shortcut.
		{
			bin = choice - 48;
			do 
			{
				cout << "Press 1 to add parts or press 2 to remove parts ";
				cin >> func;
			}while(func != 1 && func != 2);
			
			if(func == 1)
				addParts(binlist[bin]);	
			else
				removeParts(binlist[bin]);
				
			cin.ignore();
		}	
		else                 // Can press any other key to exit.
			flag = false;				
	}
		
	return 0;	
}

void addParts(Bin &bin)
{
	int amount;
	
	do
	{
		cout << "How many parts do you want to add to the " << bin.description << "s bin? (Can't use negative numbers, bin cant hold more than 30 parts) ";
		cin >> amount;
	}while((bin.parts + amount) > 30 || amount < 0);
	
	bin.parts += amount;
	cout << endl;
}

void removeParts(Bin &bin)
{
	int amount;
	
	do
	{
		cout << "How many parts do you want to remove from the " << bin.description << "s bin ? (Can't use negative numbers, bin can't have less than 0 parts) ";
		cin >> amount;
	}while((bin.parts - amount) < 0 || amount < 0);
	
	bin.parts -= amount;
	cout << endl;
}
