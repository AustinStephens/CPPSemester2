// Intro to Inheritance
// Creates 2 Essay objects, showing off the condition checking in the setters. Calculates the letter grade and outputs the information for both.

#include "GradedActivity.h"
#include "Essay.h"
#include "Essay.cpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
	Essay e1;
	Essay e2(30, 20, 25, 31);
	
	e1.setGrammar(31);
	e1.setLength(-1);
	e1.setSpelling(14);
	e1.setContent(4);
	
	cout << "Essay 1 got a(n) " << e1.getLetterGrade() << " with a total score of " << e1.getScore() << " with points in the folling categories:" << endl
		 << "Grammar - " << e1.getGrammar() << endl
		 << "Spelling - " << e1.getSpelling() << endl
		 << "Length - " << e1.getLength() << endl
		 << "Content - " << e1.getContent() << endl << endl;
		 
	cout << "Essay 2 got a(n) " << e2.getLetterGrade() << " with a total score of " << e2.getScore() << " with points in the folling categories:" << endl
		 << "Grammar - " << e2.getGrammar() << endl
		 << "Spelling - " << e2.getSpelling() << endl
		 << "Length - " << e2.getLength() << endl
		 << "Content - " << e2.getContent() << endl << endl;
	
	return 0;
}
