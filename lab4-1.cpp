// Intro to Classes and Objects.
// Uses a inline class to store anniversary date information. User enters a date, it prints out the date and the one year anniversary, asks for another date, prints out the date one by one, and the one year anniversary. Then it prints out the date of D-day.
// Labels each method const if it doesn't change anything about the object.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Date
{
public : //Behaviors
	Date();
	Date(int, int, int);
	~Date();
	void setDate(int,int,int);  // setter 
	void displayDate() const;
	void getMonth() const; // getter
	void getDay() const; // getter
	void getYear() const; // getter
	void setMonth(int); // setter
	void setDay(int); // setter
	void setYear(int); // setter
	void oneYear() const;
private: //Attributes
	int month;
	int day;
	int year;
};

void Date::setDate(int num1, int num2,int num3)
{ setMonth(num1);
  setDay(num2);
  setYear(num3);
}

void Date::displayDate() const
{  cout<<month<<'-'<<day<<'-'<<year;
}

void Date::getDay() const
{ cout << "Day: " << day << endl;
}

void Date::getMonth() const
{ cout << "Month: " << month << endl;
}

void Date::getYear() const
{ cout << "Year: " << year << endl;
}

// sets the day to 31 or 1 if the day is invalid.
void Date::setDay(int d)
{ if (day > 31 )d = 31;
  if (day < 1) d = 1;
  day = d;
}

// Sets the month to 12 or 1 if the month is invalid.
void Date::setMonth(int m)
{ 
	if (m > 12) m = 12;
	if (m < 1) m = 1;
	month = m;
}

void Date::setYear(int y)
{ year = y;
}

void Date::oneYear() const // prints out the date of the next year
{ cout << month << "-" << day << "-" << (year+1);
} 

Date::Date()
{
	// could use the setters but shows you can access private members in constructors.
	month = 1;
	day = 1;
	year = 2012;
}

Date::Date(int m, int d, int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
} 

Date::~Date()
{ 
	month = 0;
	day = 0;
	year = 0;
}

int main()
{
	Date anvsy; //Instance
	// Basically goes through and uses all the methods of the class.
	int anv_mn,anv_day,anv_yr;
 	cout<<"Please Enter the information for your anniversary"<<endl<<endl;
 	cout<<"Enter the month: ";
	cin>>anv_mn;
 	cout<<"Enter the day of the month: ";
 	cin>>anv_day;
 	cout<<"Enter the year: ";
 	cin>>anv_yr;

 	anvsy.setDate(anv_mn,anv_day,anv_yr);
 	cout<<endl;
 	cout<<"The Anniversary Date is on ";
 	anvsy.displayDate();
 	cout << endl;
 	cout << "The One-Year Anniversary is on ";
 	anvsy.oneYear();
 	cout << endl << endl;
 
 	Date newanv(anv_mn, anv_day, anv_yr);
 	cout << "This is the current Anniversary Date: ";
 	newanv.displayDate();
 	cout << endl;
 	cout << "Please enter a new month. ";
 	cin >> anv_mn;
 	newanv.setMonth(anv_mn);
 	cout << "Please enter a new day. ";
 	cin >> anv_day;
 	newanv.setMonth(anv_day);
 	cout << "Please enter a new year. ";
 	cin >> anv_yr;
 	newanv.setYear(anv_yr);
 	cout << endl << "Here is the new Anniversary Date:" << endl;
 	newanv.getMonth();
 	newanv.getDay();
 	newanv.getYear();
 	cout << "The One-Year Anniversary is on ";
	newanv.oneYear();
 	cout << endl;
 	newanv.setDate(6, 6, 1944);
 	cout << "The Anniversary of D-Day: ";
 	newanv.displayDate();
 

 	cin.get();
 	cin.get();
	return 0;
}
