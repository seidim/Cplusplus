/*********************************************************************
** Author: Muneef Seidi
** Date: 10/17/2016
** Description: This is the implementation for Student.hpp.  This program
creates student objects with student score and student name.
*********************************************************************/
#include <iostream>
#include <string>

#include "Student.hpp"

using namespace std;

Student::Student(){	// default constructor.
}

Student::Student (string n, double s) {	// constructor to initialize fields
    name = n;				// of student.
    score = s;
    }

string Student::getName(){	// return name of student.
    return name;
}

double Student::getScore(){	// return score of student.
    return score;

}

