// Introduction to Structures
// Stores 2 MovieData structures and prints them out in a function.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


using std::cout;
using std:: endl;

struct MovieData
{
	char title[50],
		 director[50];
	int year,
		time;
};

void display(const MovieData &movie);

int main()
{
	MovieData movie1 = {"Doctor Strange", "Scott Derrickson", 2016, 115};
	MovieData movie2 = {"Sully", "Clint Eastwood", 2016, 96};
	
	display(movie1);
	display(movie2);
	
	return 0;
}

void display(const MovieData &movie)
{
	cout << "Title: " << movie.title << endl
		 << "Director: " << movie.director << endl
		 << "Year Released: " << movie.year << endl
		 << "Running Time: " << movie.time << " minutes"
		 << endl << endl;	
}
