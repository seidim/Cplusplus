/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is the implementation for Point.hpp. This 
program creates a point using x and y coordinates. It allows you to get
the distance between the two points.
*********************************************************************/
#include <iostream>
#include <cmath>
#include "Point.hpp"
using namespace std;

Point::Point() {	// default constructor initializes to 0.
   setXCoord(0);
   setYCoord(0);
}
Point::Point(double x, double y) {	// constructor to create a point object. 
   setXCoord(x);
   setYCoord(y);
}
void Point:: setXCoord(double x) {	// set x coordinate to x.
   XCoord = x;
}
double Point:: getXCoord() {	// return x coordinate.
   return XCoord;
}            
void Point:: setYCoord(double y) {	// sets y coordinate to y.
   YCoord = y;
}
double Point:: getYCoord() {	// return y coordinate.
   return YCoord;
}     
double Point:: distanceTo(const Point& other) {	// returns the distance between 2 points.
    double x1, x2, y1, y2, distanceSq;
    x1= XCoord;
    x2 = other.XCoord;   	
    y1= YCoord;
    y2 = other.YCoord;
    distanceSq = pow((x1-x2),2) + pow((y1-y2),2);
    return sqrt(distanceSq); 
}
