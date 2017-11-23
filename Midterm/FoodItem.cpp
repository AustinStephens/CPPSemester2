#include "GroceryItem.h"
#include "FoodItem.h"

//constructor
FoodItem::FoodItem(): GroceryItem()
{
	setCalories(1);
	setServings(1);
}
FoodItem::FoodItem(int b, float p, int c, float s):GroceryItem(b, p)
{
	setCalories(c);
	setServings(s);
}
//accessor
int FoodItem::getCalories() const
{
	return calories;
}
float FoodItem::getServings() const
{
	return servings;
}
//mutators
void FoodItem::setCalories(int c)
{
	if (c < 1)
		calories = 1;
	else
		calories = c;
}
void FoodItem::setServings(float s)
{
	if (s < 1)
		servings = 1;
	else
		servings = s;
		
}
//overloaded relational operators
bool FoodItem::operator> (const FoodItem &obj)
{
	bool status = false;
	if (getCalories() * getServings() > obj.getCalories() * obj.getServings())
		status = true;
	return status;
}
bool FoodItem::operator< (const FoodItem &obj)
{
	bool status = false;
	if (getCalories() * getServings() < obj.getCalories() * obj.getServings())
		status = true;
	return status;
}
bool FoodItem::operator!= (const FoodItem &obj)
{
	bool status = false;
	if (getCalories() * getServings() != obj.getCalories() * obj.getServings())
		status = true;
	return status;
}
bool FoodItem::operator== (const FoodItem &obj)
{
	bool status = false;
	if (getCalories() * getServings() == obj.getCalories() * obj.getServings())
		status = true;
	return status;
}

ostream &operator << (ostream &stream, const FoodItem &obj)
{
	stream << "UPC #" << obj.getBarcode() << " price $" << fixed << setprecision(2) << obj.getRtprice() << " has " << obj.getCalories()
		   << " cal/svs with " << setprecision(1) << obj.getServings() << " svs a total of " << setprecision(0) << obj.getServings() * obj.getCalories() << " calories";
	return stream;
}

