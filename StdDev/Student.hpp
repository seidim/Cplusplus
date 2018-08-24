/*********************************************************************
** Author: Muneef Seidi
** Date: 10/17/2016
** Description: This is the header file for Student.cpp.  It's the
interface for creating a student object, getting the student name,
and getting student score.
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;

#ifndef STUDENT_HPP
#define STUDENT_HPP

class Student {		// member variables
private:
    string name;
    double score;

public:			// prototypes of member functions.
    Student();
    Student (string n, double s);
    string getName();
    double getScore();
};

#endif

