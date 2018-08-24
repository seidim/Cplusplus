/*********************************************************************
** Author: Muneef Seidi
** Date: 10/24/2016
** Description: This function is a modification of the bubble sort
function. It takes two parameters, an array of boxes and the size of
the array. It sorts an array of boxes from greatest volume to least
volume using the Box class.
*********************************************************************/

#include<iostream>
#include "Box.hpp"

using namespace std;


void boxSort(Box array[], int size)	// boxSort function that sorts box objects
{					// from greatest volume to lowest volume.
	Box temp;
	bool swap;
	do
	{
		swap = false;
		for (int count = 0; count<(size - 1); count++)
		{
			if (array[count].getVolume() < array[count + 1].getVolume())	//check volume.
			{
				temp = array[count];			// swap values.
				array[count]= array[count + 1];
				array[count + 1]= temp;
				swap = true;
			}
		}
	} while (swap);
}


