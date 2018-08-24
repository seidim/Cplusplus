/*********************************************************************
** Author: Muneef Seidi
** Date: 11/22/16
** Description: This is the implementation code for StringList.hpp.
Using an appropriate definition of ListNode, a simple linked list 
was designed.
*********************************************************************/


#include "StringList.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;


StringList::StringList()    // default constructor
{
	head = NULL;
}


StringList::StringList(const StringList& other)    // copy constructor
{
	head = NULL;

	ListNode *p = other.head;		//Separate duplicate of 
	while (p != NULL)				//StringList object is created.
	{
		add(p->parameter);
		p = p->next;
	}


}

void StringList::add(string str)		//add function
{

	if (head == NULL)
		head = new ListNode(str);
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != NULL)     // walks down the list until pointer equals NULL
			nodePtr = nodePtr->next;

		nodePtr->next = new ListNode(str); // actually adds new node to end

	}
}

int StringList::positionOf(string value)		//position function
{												//returns position in list.

	ListNode *nodePtr = head;
	int length = 0;
	while (nodePtr != NULL)
	{
		if (nodePtr->parameter == value)		//if statement to get position if in list.
			return length;
		else
			nodePtr = nodePtr->next;
		length++;
	}

	return -1;		//-1 is returned if value not in the list.
}

bool StringList::setNodeVal(int position, string value)	//sets value of the node at position.
{

	ListNode *nodePtr = head;
	int count = 0;

	while (nodePtr != NULL)			//loop to set node as long as position of parameter
	{								//is not larger than number of nodes in list.
		if (count == position)
		{
			nodePtr->parameter = value;
			return true;
		}
		count++;
		nodePtr = nodePtr->next;
	}

	return false;	//false is returned if position of string is larger than the number of nodes in list.
}


vector<string> StringList::getAsVector()		//get vector function.
{
	vector<string> stringVec;
	StringList obj;

	ListNode *nodePtr = head;

	while (nodePtr != NULL)		//loop to get values in StringList.
	{
		stringVec.push_back(nodePtr->parameter);
		nodePtr = nodePtr->next;

	}
	return stringVec;	//return StringList vector.
}

StringList::~StringList()		//destructor
{


	ListNode *nodePtr = head;

	while (nodePtr != NULL)
	{
		ListNode *temp = nodePtr;
		nodePtr = nodePtr->next;
		delete temp;	//deletes memory that was dynamically allocated by StringList object.

	}

}


