// Intro to Templates.
// Uses a template class to demonstrate the functionality of templates. The template class stores any kind of data type as a property. This program uses it to store ints, chars, floats, bools, and strings.

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<class T>
class AnyType
{
	private:
		T item;
		bool isItemSet;
	public:
		AnyType() { isItemSet = false; }
		T getItem()
		{
			if (isItemSet) return item;
			else cout << "Item not set";
			
		}
		void setItem(T i)
		{
			item = i;
			isItemSet = true;
		}
};


int main()
{
	AnyType<int> ATint;
	ATint.setItem(4);
	AnyType<char> ATchar;
	ATchar.setItem('A');
	AnyType<string> ATstring;
	ATstring.setItem("Hello");
	AnyType<float> ATfloat;
	ATfloat.setItem(5.5f);
	AnyType<bool> ATbool;
	ATbool.setItem(false);
	
	cout << "The value of ATint is : " << ATint.getItem() << endl;
	cout << "The value of ATchar is : " << ATchar.getItem() << endl;
	cout << "The value of ATfloat is : " << ATfloat.getItem() << endl;
	cout << "The value of ATstring is : " << ATstring.getItem() << endl;
	cout << "The value of ATbool is : " << ATbool.getItem() << endl;
	return 0;
}
