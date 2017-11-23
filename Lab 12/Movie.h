#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using std::string;

class Movie
{
private:
	int time;
	string title;
public:
	//constructors
	Movie()
	{
		setTime(0);
		setTitle("");
	}
	Movie(int time, string title)
	{
		setTime(time);
		setTitle(title);
	}
	//accessors
	int getTime() const
	{
		return time;
	}
	string getTitle() const
	{
		return title;
	}
	//mutators
	void setTime(int t)
	{
		if (t < 0)
			t = 0;
		time = t;
	}
	void setTitle(string t)
	{
		title = t;
	}
	
	//operators
	bool operator <(const Movie &obj)
	{
		if (getTime() < obj.getTime()) return true;
		else return false;
	}
	bool operator >(const Movie &obj)
	{
		if (getTime() > obj.getTime()) return true;
		else return false;
	}
	bool operator ==(const Movie &obj)
	{
		if (getTime() == obj.getTime()) return true;
		else return false;
	}
};

#endif
