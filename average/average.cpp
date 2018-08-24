/*********************************************************************
** Author: Muneef Seidi
** Date: 9/27/2016
** Description: This program takes in five numbers and finds the average.
*********************************************************************/

#include <iostream>

using namespace std;

int main()
{
        double  average, a, b, c, d, e;

        cout << "Please enter five numbers." << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;

        average = (a+b+c+d+e)/5.0;

        cout << "The average of those numbers is:" << endl;
        cout << average << endl;


    return 0;
}

