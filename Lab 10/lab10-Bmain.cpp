// Intro to Templates.
// Uses a template absolute value function to demonstrate the functionality of templates. Shows absolute value of ints, floats, negative numbers, and chars. 

#include <iostream>

using std::cout;
using std::endl;

template<class T>
T absolute(T a)
{
	if (a>=0) return a;
	else return -a;
}


int main()
{
	cout << "Absolute Value of 5 : " << absolute(5) << endl;
	cout << "Absolute Value of -5 : " << absolute(-5) << endl;
	cout << "Absolute Value of .9 : " << absolute(.9) << endl;
	cout << "Absolute Value of -4.7 : " << absolute(-4.7) << endl;
	cout << "Absolute Value of A : " << absolute('A') << endl;
	return 0;
}
