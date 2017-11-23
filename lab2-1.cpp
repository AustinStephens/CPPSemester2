// Random Number generating
// Flips a coin a given number of times.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std::cin;
using std::endl;

void flip(int);

int main()
{
	int num;
	cout << "How many times do you want to flip the coin? ";
	cin >> num;
	
	flip(num);
	
	return 0;	
}

void flip(int num)
{
	int outcome;
	srand (time(NULL));	
	
	for (int i = 0; i < num; i++)
	{
		outcome = rand() % 2 + 1; // 1 - 2
		if (outcome == 1)
		{
			cout << "heads" << endl;
		}
		else 
		{
			cout << "tails" << endl;
		}
	}
}
