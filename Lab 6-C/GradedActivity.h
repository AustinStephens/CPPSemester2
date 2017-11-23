#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
	protected:
		float score;
		char letter;
		void determineGrade();
	public:
		GradedActivity()
			{score = 0.0;}
			
		GradedActivity(float s)
			{score = s;}
	
		void setScore(float s)
			{score = s;}
			
		float getScore() const
			{return score;}
	
		char getLetterGrade() const
			{ return letter;}
};

#endif
