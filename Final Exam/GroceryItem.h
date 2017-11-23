#ifndef GROCERYITEM_H
#define GROCERYITEM_H

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
};

#endif
