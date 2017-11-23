#ifndef PHONE_H
#define PHONE_H

class Phone
{
public:
	int areaCode;
	int exchange;
	int number;
	bool unlisted;

	Phone();
	Phone(int, int, int, bool);
	void setPhone(int, int , int, bool);
	void pntPhone() const;
	void dial() const;
	void unlist();
	void list();
	
	Phone *nextVal;
};

#endif
