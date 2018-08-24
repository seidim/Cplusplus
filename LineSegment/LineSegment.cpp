/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is the implementation for LineSegment.hpp. This
program allows you to create a line using two points from Point.cpp.
It allows you to get the slope of the line and the length of line using
the distanceTo method from Point.cpp.
*********************************************************************/
#include <iostream>
#include "LineSegment.hpp"
using namespace std;

LineSegment::LineSegment() {	// default constructor to create a line object.
   Point po1;
   Point po2;
   setEnd1(po1);
   setEnd2(po2);
}   
LineSegment::LineSegment(Point p1, Point p2) { // constructor to create a line object.
   setEnd1(p1);
   setEnd2(p2);
}  
void LineSegment:: setEnd1(Point &p) { // sets x and y coordinates for first end point.
   p1.setXCoord(p.getXCoord());
   p1.setYCoord(p.getYCoord());
}
Point LineSegment:: getEnd1() {	// returns the first point.
   return p1;
}       
void LineSegment:: setEnd2(Point &p) { // sets x and y coordinates for second end point.
   p2.setXCoord(p.getXCoord());
   p2.setYCoord(p.getYCoord());
}
Point LineSegment:: getEnd2() {	// returns the second point.
   return p2;
}       
double LineSegment:: length() { // returns length of line.
   return p1.distanceTo(p2);
}
double LineSegment:: slope() {	// return the slope of the line.
         return (p2.getYCoord()- p1.getYCoord())/(p2.getXCoord() - p1.getXCoord());
   }
   
       
