#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
	T value;
	Node<T> *nextNode;
	
	Node (T nodeVal)
	{
		value = nodeVal;
		nextNode = nullptr;
	}	
};
#endif
