/*********************************************************************
** Author: Muneef Seidi
** Date: 11/7/2016
** Description: This is the implementation code for MyInteger.hpp. It
has a field of type pointer-to-int called pInteger. It has a  
constructor that takes as a parameter an int and the constructor will 
then dynamically allocate memory for an int, using pInteger, and assign 
the parameter's value to that memory.
*********************************************************************/



#include <iostream>
#include "MyInteger.hpp"

using namespace std;


MyInteger::MyInteger(int num) {	//constructor.

	pInteger = new int;
	*pInteger = num;
}

MyInteger::MyInteger(const MyInteger &other) {	//copy constructor.
	pInteger = new int;
	*pInteger = *other.pInteger;
}

MyInteger::~MyInteger() {	//this is the destructor.
	delete pInteger;
}

void MyInteger::setMyInt(int num) {	//setting the value of the int that pInteger points to.
	*pInteger = num;
}

int MyInteger::getMyInt() {	//getting the value of the int that pInteger points to.
	return *pInteger;
}


void MyInteger::operator = (const MyInteger &other) {
	*pInteger = *other.pInteger;
}

