#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "Employee.h"
#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker
{
		float bonus;
		float reqTraining;
		float trainingDone;	
	public:
		//constructors
		TeamLeader();
		TeamLeader(float, float, float);
		//accesssors
		float getBonus() const;
		float getReqTraining() const;
		float getTrainingDone() const;
		//mutators
		void setBonus(float);
		void setReqTraining(float);
		void setTrainingDone(float);	
};

#endif
