#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"

template <class T>
class BinaryTree
{
public:
	Node<T> *root;
	
	BinaryTree()
	{
		root = nullptr;
	}
	
	bool search(T);
	void insert(T);
	void display(Node<T> *);	
};
#endif
