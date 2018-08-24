/*********************************************************************
** Author: Muneef Seidi
** Date: 10/11/2016
** Description: This is the header file for Box.cpp.  It's the interface
for creating a box object, getting the surface area, and gettting the volume.
*********************************************************************/
#include <iostream>
using namespace std;
#ifndef BOX_HPP
#define BOX_HPP

class Box {
   private:	// member variables.
      double height;
      double width;
      double length;
   
   public:	// prototypes for member functions.
      Box();	
      Box(double height, double width, double length);
      void setHeight(double h);
      void setWidth (double w);
      void setLength(double l);
      double getVolume();
      double getSurfaceArea();
};
#endif      
