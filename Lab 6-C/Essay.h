#ifndef ESSAY_H
#define ESSAY_H

#include "GradedActivity.h"

class Essay : public GradedActivity
{
		float grammar;
		float spelling;
		float length;
		float content;
	protected:
		void determineGrade();
	public:
		//constructor
		Essay();
		Essay(float, float, float, float);
		//accessor
		float getGrammar() const;
		float getSpelling() const;
		float getLength() const;
		float getContent() const;
		//mutators
		void setGrammar(float);
		void setSpelling(float);
		void setLength(float);
		void setContent(float);
		
};

#endif
