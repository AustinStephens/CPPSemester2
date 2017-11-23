#ifndef SHIP_H
#define SHIP_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Ship
{
		string name;
		string year;
	public:
		//constructor
		Ship();
		Ship(string, string);
		//accessor
		string getName() const;
		string getYear() const;
		//mutators
		void setName(string);
		void setYear(string);	
		
		virtual void print() const;	
};

#endif
