// Data Structures
// Uses a stack to display information about the Movie objects in the stack.

#include "Movie.h"
#include <stack>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	stack<Movie> movieList;
	
	movieList.push(Movie(108, "Boss Baby"));
	movieList.push(Movie(97, "Going In Style"));
	movieList.push(Movie(99, "Wonder Woman"));
	movieList.push(Movie(144, "Transformer: The Last Knight"));
	movieList.push(Movie(98, "Dispicable Me 3"));
	movieList.push(Movie(84, "Beauty and the Beast"));
	movieList.push(Movie(117, "Blade Runner 2049"));
	movieList.push(Movie(118, "Kong: Skull Island"));
	movieList.push(Movie(103, "Saw Legacy"));
	movieList.push(Movie(137, "Logan"));
	movieList.push(Movie(112, "Coco"));
	movieList.push(Movie(123, "King Arthor: Legend of the Sword"));
	movieList.push(Movie(93, "The Six Billion Dollar Man"));
	movieList.push(Movie(136, "Star Wars: The Last Jedi"));	
	
		
	while (!movieList.empty())
	{
		cout << movieList.top().getTitle() << "- " << movieList.top().getTime() << " minutes." << endl;
		movieList.pop();
	}
	
	return 0;
}
