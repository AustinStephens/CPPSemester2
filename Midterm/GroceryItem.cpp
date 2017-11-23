#include "GroceryItem.h"

//constructor
GroceryItem::GroceryItem()
{
	setBarcode(0);
	setRtprice(0);
}
GroceryItem::GroceryItem(int b, float p)
{
	setBarcode(b);
	setRtprice(p);
}
//accessor
int GroceryItem::getBarcode() const
{
	return barcode;
}
float GroceryItem::getRtprice() const
{
	return rtprice;
}
//mutators
void GroceryItem::setBarcode(int b)
{
	if (b < 0)
		barcode = 0;
	else
		barcode = b;
}
void GroceryItem::setRtprice(float p)
{
	if (p < 0)
		rtprice = 0;
	else
		rtprice = p;
}
//overloaded + operator
float GroceryItem::operator+(const GroceryItem &obj) const
{
	GroceryItem temp;
	temp.setRtprice(rtprice + obj.getRtprice());
	return temp.getRtprice();
}

ostream &operator << (ostream &stream, const GroceryItem &obj)
{
	stream << "UPC #" << obj.getBarcode() << " price $" << fixed << setprecision(2) << obj.getRtprice();
	return stream;
}
