/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is the implementation for Box.hpp.  This program
creates box objects with height, length, and width.  It allows you to
get the volume and surface area of the box.
*********************************************************************/
#include <iostream>
#include "Box.hpp"
using namespace std;

Box::Box() {	// default constructor initializes to 1.
   height = 1;
   width = 1;
   length = 1;
}

Box::Box(double h, double w, double l) { // constructor to initialize fields of the box.
   setHeight(h);
   setWidth(w);
   setLength(l);
}

void Box::setHeight(double h) {	// set height to h.
   height = h;
}         

void Box::setWidth(double w) {	// set width to w.
   width = w;
}

void Box::setLength(double l) {	// set length to l.
   length = l;
}

double Box::getVolume() {	// return volume.
   return height*width*length;
}

double Box::getSurfaceArea() {	// return surface area.
   return 2*length*width+2*width*height+2*length*height;   
}   
