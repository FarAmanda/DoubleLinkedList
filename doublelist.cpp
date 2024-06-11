#pragma once

#include <iostream>
#include "doublelist.h"

namespace NodeP
{
	/* Member Functions for Nodes
	*/
	Node::Node() 
		{
			data = 0;
			next = NULL;
			previous = NULL;
		}

	Node::Node(int x) 
		{
			this->data = x;
			this->next = NULL;
			this->previous = NULL;
		}

	Node::Node(int x, Node* following, Node* before) {
			this->data = x;
			this->next = following;
			this->previous = before;
		}

	/* Member Functions for Linked List
	*/

	// Constructors
	LinkedList::LinkedList()
	{
		head_ptr = NULL;
		tail_ptr = NULL;
	}

	LinkedList::LinkedList(Node* x)
	{
		head_ptr = x;
		tail_ptr = x; 
	}

	void LinkedList::AddToTail(int x)
	{
		Node* insert_ptr = new Node;
		insert_ptr->data = x;

		// When linkedlist is empty
		if (head_ptr == NULL)
		{
			head_ptr = insert_ptr;
			tail_ptr = insert_ptr;
			insert_ptr->previous = NULL;


			insert_ptr = NULL;
			delete insert_ptr;
		}

		else
		{
			tail_ptr->next = insert_ptr;
			insert_ptr->previous = tail_ptr;
			tail_ptr = tail_ptr->next;
		}
	}

	void LinkedList::PrintElements()
	{
		Node* current_ptr = head_ptr;
		while (current_ptr != NULL)
		{
			std::cout << current_ptr->data << "<-->[ ";
			current_ptr = current_ptr->next;
		}

	}
	void LinkedList::PrintReverse()
	{
		Node* current_ptr = tail_ptr;
		while (current_ptr != NULL)
		{
			std::cout << current_ptr->data << ", ";
			current_ptr = current_ptr->previous;
		}
	}

};
