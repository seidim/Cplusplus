/*********************************************************************
** Author: Muneef Seidi
** Date: 11/7/2016
** Description: This is the header file for Square.cpp. It inherits
from the Rectangle file. It creats a square object and returns the
area and perimeter of the square using the inheritence of Rectangle.
*********************************************************************/



#include <iostream>
#include "Rectangle.hpp"
#ifndef SQUARE_HPP
#define SQUARE_HPP

using namespace std;

class Square : public Rectangle		//Square class that inherits from Rectangle.
{

public:

	Square();
	Square(double x) :Rectangle(x, x) {};
	void setLength(double);
	void setWidth(double);
};
#endif


