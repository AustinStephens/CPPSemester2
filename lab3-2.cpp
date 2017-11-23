// Intro to Stuctures
// Gets given data on players in a 12 man team, stores them in an array of Player structs.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::left;

struct Player
{
	char name[20];
	int number,
		points;
};

int main()
{
	int teampts = 0; // total points scored by the team
	int max = 0; // index of the player with the most points
	Player roster[12];
	cout << "Fill out the Stats for each player on the team" << endl << endl;
	
	for (int i = 0; i < 12; i++)
	{
		do {
			cout << "Enter player " << i + 1 << "'s name: ";
			cin.getline(roster[i].name, 20);
			cout << "Enter player " << i + 1 << "'s number: ";
			cin >> roster[i].number;
			cout << "Enter points scored by player " << i + 1 << ": ";
			cin >> roster[i].points;
			cin.ignore();
			if(roster[i].points < 0 || roster[i].number < 0) 
				cout << "Invalid: Can't have negative numbers, re-enter player's stats" << endl;
		}while(roster[i].points < 0 || roster[i].number < 0);
	}
	
	cout << endl << "Player Name             Player Number    Player Points" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << left << setw(24) << roster[i].name << setw(17) << roster[i].number << roster[i].points << endl;
		if (roster[i].points > roster[max].points)
			max = i;
		teampts += roster[i].points;
	}
	cout << endl << "#" << roster[max].number << " " << roster[max].name << " had the most points with " << roster[max].points << endl;
	cout << "The team has scored a total of " << teampts << " points";

	return 0;	
}
