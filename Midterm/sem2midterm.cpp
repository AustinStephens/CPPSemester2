// Midterm
// Creates 3 GroceryItem objects, one with given data. Then outputs their information using the overloaded << operator.
// Creates 3 FoodItem objects, one with given data. Then outputs their information and compares the calories/price of them with the overloaded conditional and mathematical operators.
#include "GroceryItem.h"
#include "FoodItem.h"
#include "GroceryItem.cpp"
#include "FoodItem.cpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int bcode, cals;
	float price, svs;
	cout << "What is the barcode of your Grocery Item?";
	cin >> bcode;
	cout << "What is the retail price of your Grocery Item?";
	cin >> price;
	
	GroceryItem item1(bcode, price);
	GroceryItem item2;
	GroceryItem item3(233, 1.25);
	
	cout << "Item 1:" << endl << item1 << endl;
	cout << "Item 2:" << endl << item2 << endl;
	cout << "Item 3:" << endl << item3 << endl;
	
	cout << "The price of Item 1 and Item 3 combined is $" << item1+item3 << endl << endl;
	
	cout << "What is the barcode of your Food Item?";
	cin >> bcode;
	cout << "What is the retail price of your Food Item?";
	cin >> price;
	cout << "How many calories per serving?";
	cin >> cals;
	cout << "How many servings?";
	cin >> svs;
	
	FoodItem food1(bcode, price, cals, svs);
	FoodItem food2;
	FoodItem food3(7889, 0.59, 234, 1.5);
	
	cout << "Food Item 1:" << endl << food1 << endl;
	cout << "Food Item 2:" << endl << food2 << endl;
	cout << "Food Item 3:" << endl << food3 << endl;
	
	cout << "The price of Food Item 1 and Item 1 combined is $" << setprecision(2) << item1+food1 << endl;
	cout << "The price of Food Item 1 and Food Item 3 is $" << food1+food3 << endl;
	
	cout << ((food1 > food2) ? "Food Item 1" : "Food Item 2")<< " has more calories than " << ((food1 < food2) ? "Food Item 1" : "Food Item 2") << endl;
	cout << "Food Item 1 is " << ((food1 != food2) ? "not equal" : "equal") << " to Food Item 2" << endl;
	cout << "Food Item 1 is " << ((food1 == food3) ? "equal" : "not equal") << " to Food Item 3" << endl;	
	
	return 0;
}
