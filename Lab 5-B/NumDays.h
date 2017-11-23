#ifndef NUMDAYS_H
#define NUMDAYS_H


class NumDays
{
	private:
		float hours;
		float days;
	public:
		NumDays();
		NumDays(float);
		void setHours(float);
		void setDays(float);
		float getHours() const;
		float getDays() const;
		NumDays operator++();
		NumDays operator++(int);
		NumDays operator--();
		NumDays operator--(int);
		float operator+(const NumDays &obj) const;	
		float operator-(const NumDays &obj) const;
};

#endif
