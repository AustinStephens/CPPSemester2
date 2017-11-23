// Calculates the cost of a phone call given the start time and length
// Rate is based on the start time the call is (.12 for before 7 am, .55 for 7 am to 7 pm, .35 for 7 pm to 12 am.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; // usually don't use this but theres a handful of things im using here so to save space ill put this

int main()
{
	float start;
	int time;
	float rate;
	float total;
	
	do 
	{
		cout << "What is the starting time of the call? (Enter as a floating point number HH.MM) ";
		cin >> start;
	} while ((start - static_cast<int>(start)) >= .6 || start > 23.59 || start < 0);
	
	do
	{
		cout << "How long was the call? (in minutes) ";
		cin >> time;
	} while (time < 0);
	
	if (start < 7)
	{
		rate = .12;
	}
	else if (start <= 19)
	{
		rate = .55;
	}
	else
	{
		rate = .35;
	}
	
	total = time * rate;
	
	cout << "The cost of the call is $" << fixed << showpoint << setprecision(2) << total;
	
	return 0;
}
