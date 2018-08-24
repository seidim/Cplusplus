/*********************************************************************
** Author: Muneef Seidi
** Date: 11/22/16
** Description: This is the header file for StringList.cpp.
*********************************************************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP
#include <string>
#include <vector>

using namespace std;

class StringList
{
private:
	struct ListNode		//ListNode definition
	{
		string parameter;
		ListNode *next;
		ListNode(string str, ListNode *next1 = NULL)
		{
			parameter = str;
			next = next1;
		}
	};

	ListNode *head;

public:						//member functions
	StringList();
	~StringList();
	StringList(const StringList &);
	void add(string);
	int positionOf(string);
	bool setNodeVal(int, string);
	vector<string>getAsVector();

};
#endif
