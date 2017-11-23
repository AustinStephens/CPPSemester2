#include "LinkedList.h"
#include "Node.h"
#include <iostream>

using std::cout;
using std::endl;

template <class T>
LinkedList<T>::~LinkedList()
{
	Node<T> *tempPtr;
	Node<T> *next;
	
	tempPtr = head;
	
	while (tempPtr != nullptr)
	{
		next = tempPtr->nextNode;
		delete tempPtr;
		tempPtr = next;
	}
	
}

template <class T>
void LinkedList<T>::append(T value)
{
	Node<T> *temp;
	Node<T> *tempPtr;
	
	temp = new Node<T>(value);
	if (head == nullptr) head = temp;
	else
	{
		tempPtr = head;
		while (tempPtr->nextNode)
		{
			tempPtr = tempPtr->nextNode;
		}
		
		tempPtr->nextNode = temp;
	}
}

template <class T>
void LinkedList<T>::insert(T value)
{
	Node<T> *temp;
	Node<T> *tempPtr;
	Node<T> *prev = nullptr;
	
	temp = new Node<T>(value);
	
	if (head == nullptr)
	{
		head = temp;
		temp->nextNode = nullptr;
	}
	else
	{
		tempPtr = head;
		prev = nullptr;
		while (tempPtr != nullptr && tempPtr->value < value)
		{
			prev = tempPtr;
			tempPtr = tempPtr->nextNode;
		}
		
		if (prev == nullptr)
		{
			head = temp;
			temp->nextNode = tempPtr;
		}
		else
		{
			prev->nextNode = temp;
			temp->nextNode = tempPtr;
		}
	}
}

template <class T>
void LinkedList<T>::deleteNode(T val)
{
	Node<T> *tempPtr;
	Node<T> *prev;
	
	if (head == nullptr)
		return;
		
	if (head->value == val)
	{
		tempPtr = head->nextNode;
		delete head;
		head = tempPtr;
	}
	else
	{
		tempPtr = head;
		prev = nullptr;
		
		while (tempPtr != nullptr && tempPtr->value != val)
		{
			prev = tempPtr;
			tempPtr = tempPtr->nextNode;
		}
		
		if (tempPtr)
		{
			prev->nextNode = tempPtr->nextNode;
			delete tempPtr;
		}
	}	
}

template <class T>
void LinkedList<T>::display()
{
	Node<T> *tempPtr;
	tempPtr = head;
	
	while (tempPtr != nullptr)
	{
		cout << tempPtr->value << endl;
		tempPtr = tempPtr->nextNode;
	}
}

