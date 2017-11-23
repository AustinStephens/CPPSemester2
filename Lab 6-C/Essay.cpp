#include "GradedActivity.h"
#include "Essay.h"

//constructor
Essay::Essay():GradedActivity()
{
	setGrammar(0);
	setSpelling(0);
	setLength(0);
	setContent(0);
}
Essay::Essay(float g, float s, float l, float c):GradedActivity()
{
	setGrammar(g);
	setSpelling(s);
	setLength(l);
	setContent(c);
}
//accessor
float Essay::getGrammar() const
{
	return grammar;
}
float Essay::getSpelling() const
{
	return spelling;
}
float Essay::getLength() const
{
	return length;
}
float Essay::getContent() const
{
	return content;
}
//mutators
void Essay::setGrammar(float g)
{
	if (g < 0)
		grammar = 0;
	else if (g <= 30)
		grammar = g;
	else
		grammar = 30;

	setScore(grammar + spelling + length + content);
	determineGrade();
}
void Essay::setSpelling(float s)
{
	if (s < 0)
		spelling = 0;
	else if (s <= 20)
		spelling = s;
	else
		spelling = 20;
		
	setScore(grammar + spelling + length + content);
	determineGrade();
}
void Essay::setLength(float l)
{
	if (l < 0)
		length = 0;
	else if (l <= 20)
		length = l;
	else
		length = 20;
		
	setScore(grammar + spelling + length + content);
	determineGrade();
}
void Essay::setContent(float c)
{
	if (c < 0)
		content = 0;
	else if (c <= 30)
		content = c;
	else
		content = 30;
		
	setScore(grammar + spelling + length + content);
	determineGrade();
}

void Essay::determineGrade()
{
	if (getScore() < 60)
		letter = 'F';
	else if (getScore() < 70)
		letter = 'D';
	else if (getScore() < 80)
		letter = 'C';
	else if (getScore() < 90)
		letter = 'B';
	else
		letter = 'A';
}
