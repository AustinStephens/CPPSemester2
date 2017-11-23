#ifndef FOODITEM_H
#define FOODITEM_H

#include "GroceryItem.h"

class FoodItem : public GroceryItem
{
	private:
		int calories;
		float servings;
	public:
		//constructor
		FoodItem();
		FoodItem(int, float, int, float);
		//accessor
		int getCalories() const;
		float getServings() const;
		//mutators
		void setCalories(int);
		void setServings(float);
		//overloaded relational operators
		bool operator> (const FoodItem &);
		bool operator< (const FoodItem &);
		bool operator!= (const FoodItem &);
		bool operator== (const FoodItem &);	
};

#endif
