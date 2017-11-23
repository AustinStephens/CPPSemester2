#ifndef GROCERYITEM_H
#define GROCERYITEM_H

#include <iostream>
#include <iomanip>

using std::ostream; // so I don't have to put it in both the cpp file and fooditem.
using std::ostream;
using std::fixed;
using std::setprecision;

class GroceryItem
{
	private:
		int barcode;
		float rtprice;
	public:
		//constructor
		GroceryItem();
		GroceryItem(int, float);
		//accessor
		int getBarcode() const;
		float getRtprice() const;
		//mutators
		void setBarcode(int);
		void setRtprice(float);
		//overloaded + operator
		float operator+(const GroceryItem &obj) const;	
};

#endif
