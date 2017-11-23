// Data Structures
// Uses a Binary Tree to display information about the Movie objects in the tree.

#include "Movie.h"
#include "BinaryTree.cpp"
#include "BinaryTree.h"

using std::ostream;

ostream &operator << (ostream &stream,const Movie &obj)
{
	stream << obj.getTitle() << "- " << obj.getTime() << " minutes.";	
	return stream;
}

int main()
{
	BinaryTree<Movie> movieList;
	
	movieList.insert(Movie(108, "Boss Baby"));
	movieList.insert(Movie(97, "Going In Style"));
	movieList.insert(Movie(99, "Wonder Woman"));
	movieList.insert(Movie(144, "Transformer: The Last Knight"));
	movieList.insert(Movie(98, "Dispicable Me 3"));
	movieList.insert(Movie(84, "Beauty and the Beast"));
	movieList.insert(Movie(117, "Blade Runner 2049"));
	movieList.insert(Movie(118, "Kong: Skull Island"));
	movieList.insert(Movie(103, "Saw Legacy"));
	movieList.insert(Movie(137, "Logan"));
	movieList.insert(Movie(112, "Coco"));
	movieList.insert(Movie(123, "King Arthor: Legend of the Sword"));
	movieList.insert(Movie(93, "The Six Billion Dollar Man"));
	movieList.insert(Movie(136, "Star Wars: The Last Jedi"));	
	
		
	movieList.display(movieList.root);
	return 0;
}
