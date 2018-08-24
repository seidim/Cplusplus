/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is the header file for LineSegment.cpp. It's the
interface for creating a line object and it allows you to get the length
and slope of the line.
*********************************************************************/
#include <iostream>
#include "Point.hpp"
using namespace std;

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

class LineSegment {
   private:
      Point p1;	// member variables.
      Point p2;
   public:
      LineSegment();	// prototypes for the member functions.
      LineSegment(Point p1, Point p2);
      void setEnd1(Point &p1);
      Point getEnd1();
      void setEnd2(Point &p2);
      Point getEnd2();   
      double length();
      double slope();
};

#endif      

