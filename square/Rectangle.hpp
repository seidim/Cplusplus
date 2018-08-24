/*********************************************************************
** Author: Muneef Seidi
** Date: 11/7/2016
** Description: This is the header file for Rectangle.cpp.  It's the
interface for creating a rectangle object, getting area of the rectangle,
and getting the perimeter of the rectangle.
*********************************************************************/



#include <iostream>
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

using namespace std;

class Rectangle
{
protected:		//member variables.
	double length;
	double width;

public:			//prototypes of member functions.

	Rectangle();
	Rectangle(double, double);
	double area();
	double perimeter();
	void setLength(double);
	void setWidth(double);
};

#endif
