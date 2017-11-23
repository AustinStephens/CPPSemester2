// Final Exam
// User keeps entering information on GroceryItems until they enter 0 for the barcode, the program then prints out information an all the GroceryItems entered using the overloaded << operator.
#include "GroceryItem.h"
#include "GroceryItem.cpp"
#include <queue>

using std::cout;
using std::cin;
using std::endl;
using std::queue;

int main()
{
	int barcode;
	float price;
	queue<GroceryItem> groceryList;
	
	do 
	{
		cout << "Enter the barcode ";
		cin >> barcode;
		if (barcode != 0)
		{
			cout << "Enter the price ";
			cin >> price;
			
			groceryList.push(GroceryItem(barcode, price));
		}
	} while (barcode != 0);
	
	cout << endl;
	
	while (!groceryList.empty())
	{
		cout << groceryList.front() << endl;
		groceryList.pop();
	}
	
	
	return 0;
}
