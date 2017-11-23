#include "TeamLeader.h"
#include "Employee.h"
#include "ProductionWorker.h"

TeamLeader::TeamLeader():ProductionWorker()
{
	setBonus(0);
	setReqTraining(0);
	setTrainingDone(0);
}
TeamLeader::TeamLeader(float b, float r, float t):ProductionWorker()
{
	setBonus(b);
	setReqTraining(r);
	setTrainingDone(t);
}
//accesssors
float TeamLeader::getBonus() const
{
	return bonus;
}
float TeamLeader::getReqTraining() const
{
	return reqTraining;
}
float TeamLeader::getTrainingDone() const
{
	return trainingDone;
}
//mutators
void TeamLeader::setBonus(float num)
{
	if (num >= 0)
		bonus = num;
	else
		bonus = 0;
}
void TeamLeader::setReqTraining(float num)
{
	if (num >= 0)
		reqTraining = num;
	else
		reqTraining = 0;
}
void TeamLeader::setTrainingDone(float num)
{
	if (num >= 0)
		trainingDone = num;
	else
		trainingDone = 0;
}
