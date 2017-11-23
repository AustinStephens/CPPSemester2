// Intro to Templates.
// Demonstrates the functionality of templates, uses template minimum and maximum functions to compare ints, floats, and chars.

#include <iostream>

using std::cout;
using std::endl;

template<class T>
T minimum(T a, T b)
{
	if (a>b) return b;
	else return a;
}

template<class T>
T maximum(T a, T b)
{
	if (a>b) return a;
	else return b;
}

int main()
{
	cout << "Min of 4 and 5 : " << minimum(4,5) << endl;
	cout << "Min of 4.5 and 5.1: " << minimum(4.5,5.1) << endl;  
	cout << "Min of C and A : " << minimum('A', 'C') << endl;
	cout << "Max of 6 and 7: " << maximum(6,7) << endl;  
	cout << "Max of 8.9 and 4.9 : " << maximum(8.9,4.9) << endl;
	cout << "Max of b and f: " << maximum('b','f') << endl;  
	
	return 0;
}
