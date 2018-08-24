/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is the header file for Point.cpp. It's the
interface for creating the point object, and getting the distance
between two points.
*********************************************************************/
#include <iostream>
using namespace std;
#ifndef POINT_HPP
#define POINT_HPP

class Point {
   private:
      double XCoord;	// member variables.
      double YCoord;
   public:
      Point();	// prototypes for the member functions.
      Point(double x, double y);
      void setXCoord(double x);
      double getXCoord();
      void setYCoord(double y);
      double getYCoord();
      double distanceTo(const Point& other);
};

#endif      
