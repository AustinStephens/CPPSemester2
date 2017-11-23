#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template <class T>
class LinkedList
{
public:
	Node<T> *head;
	
	LinkedList()
	{
		head = nullptr;
	}
	
	~LinkedList();
	
	void append(T);
	void insert(T);
	void deleteNode(T);
	void display();	
};
#endif
