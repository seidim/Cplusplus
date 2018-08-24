/*********************************************************************
** Author: Muneef Seidi
** Date: 11/7/2016
** Description: This is the implementation file for Rectangle.hpp. This
programs creates a Rectangle objects and gets the area and perimeter of
the rectangle..
*********************************************************************/



#include <iostream>
#include "Rectangle.hpp"

using namespace std;

Rectangle::Rectangle (){	//default constructor.
	
	setLength(0);
	setWidth(0);
}

Rectangle::Rectangle(double l, double w)	//constructor.
{
	setLength(l);
	setWidth(w);
}

double Rectangle::area()	//returns the area of the rectangle.
{
	return (width * length);
}

double Rectangle::perimeter()	//returns the perimeter of the rectangle.
{
	return (2 * (width + length));
}

void Rectangle::setLength(double l)	//sets the length of rectangle.
{
	length = l;
}

void Rectangle::setWidth(double w)	//sets the width of rectangle.
{
	width = w;
}

