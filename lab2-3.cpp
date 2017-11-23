// This program checks a given 3x3 matrix to see if its a Lo Shu Magic Square.
// A Lo Shu Magic Square is a 3x3 matrix where each row, column, and diagnol sum up to 15. And the numbers given cannot duplicate and must be 1-9.

/*  This is the right answer
	4 9 2
	3 5 7
	8 1 6
*/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

bool test(int [3][3]);

int main()
{
	int tester[3][3] = {0};
	bool flag;
	
	cout << "Enter the 3x3 Lo Shu Magic Square" << endl;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			do
			{
				flag = false;
				do 
				{
				cout << "Row " << i + 1 << " Column " << j + 1 << " ";
				cin >> tester[i][j];
				}while(tester[i][j] > 9 || tester[i][j] < 1);
				
				//two for loops to check if it equals anything before it in the array
				for (int row = 0; row < 3; row++) // could do row <= i to make it quicker
				{
					for (int col = 0; col < 3 && !flag; col++)
					{
						if (tester[row][col] == tester[i][j] && (i != row || j != col))
						{
							flag = true; // means there is a duplicate
							cout << "Duplicate" << endl;
						}
					}
				}
			}while(flag);
		}
	}
	
	if(test(tester))
		cout << "It is a Lo Shu Magic Square";
	else
		cout << "It is NOT a Lo Shu Magic Square";
	
	return 0;
}

bool test(int tester[3][3])
{
	int values[8];
	values[0] = tester[0][0] + tester[0][1] + tester[0][2]; // first row
	values[1] = tester[1][0] + tester[1][1] + tester[1][2]; // second row
	values[2] = tester[2][0] + tester[2][1] + tester[2][2]; // third row
	values[3] = tester[0][0] + tester[1][1] + tester[2][2]; // top left to bottom right diagnol
	values[4] = tester[2][0] + tester[1][1] + tester[0][2]; // top right to bottom left diagnol
	values[5] = tester[0][0] + tester[1][0] + tester[2][0]; // first column
	values[6] = tester[0][1] + tester[1][1] + tester[2][1]; // second column
	values[7] = tester[0][2] + tester[1][2] + tester[2][2]; // third column
	
	for (int i = 1; i < 8; i++)
	{
		if (15 != values[i])
			return false;
	}
	return true;
}
