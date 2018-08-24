/*********************************************************************
** Author: Muneef Seidi
** Date: 11/7/2016
** Description: This is the header file for MyInteger.cpp. It contains
a class MyInteger. It has afield of type pointer-to-int called pInteger.
*********************************************************************/

#include <iostream>
#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

using namespace std;

class MyInteger {

private:
	int *pInteger;	//member variable.


public:			//prototypes of member functions.
	MyInteger(int num);
	MyInteger(const MyInteger &other);
	~MyInteger();
	void setMyInt(int num);
	int getMyInt();
	void operator = (const MyInteger &other);
};

#endif
