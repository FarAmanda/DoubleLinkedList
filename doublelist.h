#pragma once
// Documentation for NodeP
/* Class Node
*	Ability to create nodes doubly-linked nodes (with a previous and a next)
		That hold int-type data,
*		
*/
namespace NodeP
{
	class Node
	{
	public:
		Node();
		Node(int x);
		Node(int x, Node* y, Node* z);

		int data;
		Node* next;
		Node* previous;

	};

	class LinkedList
	{
	public:
		LinkedList();
		LinkedList(Node* x);
		void AddToTail(int x);
		void PrintElements();
		void PrintReverse();
	private:
		Node* head_ptr;
		Node* tail_ptr;

	};

}