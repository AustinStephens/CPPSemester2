#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
	T value;
	Node<T> *leftNode;
	Node<T> *rightNode;
	
	Node (T nodeVal)
	{
		value = nodeVal;
		rightNode = nullptr;
		leftNode = nullptr;
	}	
};
#endif
