#include "BinaryTree.h"
#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

template <class T>
bool BinaryTree<T>::search(T value) // Assuming its sorted, based on movie runtime in 11-c
{
	Node<T> *temp;
	
	if (!root) return false;
	else
	{
		temp = root;
		while (!temp)
		{
			if (temp->value == value)
				{return true;}
			else if (temp->value > value)
				{temp = temp->leftNode;}
			else
				{temp = temp->rightNode;}
		}
		return false;
	}
}

template <class T>
void BinaryTree<T>::insert(T value)
{
	Node<T> *temp;
	Node<T> *tempPtr;
	Node<T> *prev = nullptr;
	bool left;
	
	temp = new Node<T>(value);
	
	if (root == nullptr)
	{
		root = temp;
		temp->leftNode = nullptr;
		temp->rightNode = nullptr;
	}
	else
	{
		tempPtr = root;
		while (tempPtr)
		{
			prev = tempPtr;
			if (tempPtr->value > value)
				{tempPtr = tempPtr->leftNode; left = true;}
			else
				{tempPtr = tempPtr->rightNode; left = false;}
		}
		if(left) prev->leftNode = temp;
		else prev->rightNode = temp;
		
		temp->leftNode = nullptr;
		temp->rightNode = nullptr;
	}
}

template <class T>
void BinaryTree<T>::display(Node<T> *nodePtr)
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		display(nodePtr->leftNode);
		display(nodePtr->rightNode);	
	}
}
