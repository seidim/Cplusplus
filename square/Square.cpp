/*********************************************************************
** Author: Muneef Seidi
** Date: 11/7/2016
** Description: This is the implementation for Square.hpp. It inherits
from the base class Rectangle. It creats a square object and returns the
area and perimeter of the square using the inheritence of the Rectangle
class.
*********************************************************************/

#include <iostream>
#include "Rectangle.hpp"
#include "Square.hpp"

using namespace std;

Square::Square() {	//constructor.
}


void Square::setLength(double side)	//overrides the setLength
{					//and setWidth to equal side.
	length = side;
	width = side;
	
}

void Square::setWidth(double side)
{
	length = side;
	width = side;
	
}
