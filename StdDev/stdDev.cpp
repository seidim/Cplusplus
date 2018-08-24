/*********************************************************************
** Author: Muneef Seidi
** Date: 10/17/2016
** Description: This function takes two parameters, an array of pointers 
to Students and the size of the array. It returns the standard deviation 
for the student scores.
*********************************************************************/
#include <iostream>
#include <cmath>
#include "Student.hpp"

using namespace std;


double stdDev(Student *z, int s)	// function name with a pointer to array of students and number of students.
{
    double mean=0.0, sum_deviation=0.0, sum = 0.0; // initializing mean, sum, and sum deviation to 0.
    int i;
    for(i=0; i<s;++i)	// for loop to get sum of student scores.
    {
        Student w = z[i];
        sum+=w.getScore();

    }
    mean=sum/s;	// get mean of student scores.
  
    for(i=0; i<s;++i)	{ // for loop to get sum deviation.
    
	sum_deviation+=(z[i].getScore()-mean)*(z[i].getScore()-mean);
    }
    return sqrt(sum_deviation/s); // returning the standard deviation.

}


