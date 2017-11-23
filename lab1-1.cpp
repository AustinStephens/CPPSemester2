// Prints a given number in hexidecimal and decimal using the std library

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; // usually don't use this but theres a handful of things im using here so to save space ill put this

int main()
{
	int num;
	char flag;
	
	do
	{
		cout << "Enter an integer in either hexidecimal or decimal format ";
		scanf("%i", &num);
		
		cout << "Decimal: " << dec << num << endl
			 << "Hexidecimal: " << hex << num << endl;
			 
			 
		cout << "Do you want to do another? (Hit any key except N to continue) ";
		cin >> flag;
	}while (flag != 'n' && flag != 'N');
	
	
	return 0;
}
