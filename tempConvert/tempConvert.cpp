/*********************************************************************
** Author: Muneef Seidi	
** Date: 9/27/2016
** Description: This program converts celsius to fahrenheit.
*********************************************************************/


#include <iostream>

using namespace std;

int main()
{
    double celsius, fahrenheit;


    cout << "Please enter a Celsius temperature." << endl;
    cin >> celsius;

    fahrenheit = (9.0/5.0)*(celsius)+32;

    cout << "The equivalent Fahrenheit temperature is:" << endl;
    cout << fahrenheit<< endl;

    return 0;
}

