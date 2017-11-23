// Intro to Inheritance
// This program uses multiple constructors and multi-level inheritance.
// Creates 2 TeamLeader objects using different constructors. Outputs information on both TeamLeaders.

#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
#include "ProductionWorker.cpp"
#include "TeamLeader.cpp"
#include "Employee.cpp"

using std::cout;
using std::endl;

int main()
{
	TeamLeader leader1;
	TeamLeader leader2(600, 15, 2);
	
	leader1.setName("Larry");
	leader1.setBonus(500);
	leader1.setReqTraining(12);
	
	leader2.setName("Betty");
	
	cout << leader1.getName() << " has a monthly bonus of $" << leader1.getBonus() << " and is required to have at least " << leader1.getReqTraining()
	 	 << " hours of training and has completed " << leader1.getTrainingDone() << " hours." << endl;
		  
	cout << leader2.getName() << " has a monthly bonus of $" << leader2.getBonus() << " and has " << leader2.getReqTraining() - leader2.getTrainingDone()
		 << " hours of training left." << endl; 
	
	
	
	
	return 0;
}
