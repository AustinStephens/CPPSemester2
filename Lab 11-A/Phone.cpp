#include <iostream>
#include <iomanip>
#include "Phone.h"

using std::cout;
using std::endl;
using std::setw;
using std::setfill;
using std::ostream;

Phone::Phone()
{
	setPhone(0,0,0,false);
	nextVal = nullptr;	
}
Phone::Phone(int a, int e, int n, bool u)
{
	setPhone(a,e,n,u);
	nextVal = nullptr;
}
void Phone::setPhone(int area, int ex, int num, bool unlist)
{
	unlisted = unlist;
	
	if (area < 0 || area > 999) area = 0;
	areaCode = area;
	
	if (ex < 0 || ex > 999) ex = 0;
	exchange = ex;
	
	if (num < 0 || num > 9999) num = 0;
	number = num;
}
void Phone::pntPhone() const
{
	cout << "(" << setfill('0') << setw(3) << areaCode << ")" << setw(3) <<  exchange << "-"  << setw(4) << number << " is " << (unlisted ? "unlisted" : "listed") << endl;
}
void Phone::dial() const
{
	cout << areaCode << exchange << number << endl;
}
void Phone::unlist()
{
	unlisted = true;
}
void Phone::list()
{
	unlisted = false;
}

ostream &operator <<(ostream &stream, const Phone &obj)
{
	obj.pntPhone();
}
