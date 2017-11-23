// Introduction to vectors
// Tests 2 pin vectors 3 times to see if they have all the same elements.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>


using std::cout;
using std::endl;
using std::vector;

bool testPin(const vector<int>, const vector<int>, int);

int main()
{
	const int DIGITS = 7;
	vector<int> pin1 {2, 4, 1, 8, 7, 9, 0};
	vector<int> pin2 {2, 4, 6, 8, 7, 9, 0};
	vector<int> pin3 {1, 2, 3, 4, 5, 6, 7};
	
	if(testPin(pin1, pin2, DIGITS))
		cout << "SUCCESS: pin1 and pin2 report to be the same." << endl;
	else
		cout << "ERROR: pin1 and pin2 are different." << endl;
	
	if(testPin(pin1, pin3, DIGITS))
		cout << "SUCCESS: pin1 and pin3 report to be the same." << endl;
	else
		cout << "ERROR: pin1 and pin3 are different." << endl;
		
	if(testPin(pin1, pin1, DIGITS))
		cout << "SUCCESS: pin1 and pin1 report to be the same." << endl;
	else
		cout << "ERROR: pin1 and pin1 are different." << endl;
	return 0;
}

bool testPin(const vector<int> custPin, const vector<int> dbPin, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (custPin[i] != dbPin[i])
			return false;
	}
	return true;
}
