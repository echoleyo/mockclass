// myGmock.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>

#include "turtles.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int x, y, length;
    Turtles turtle;
    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;
    cout << "Enter length: " << endl;
    cin >> length;
    turtle.Forward(39);
    if ( turtle.isPositive(x)) {
        cout << "x is positive.\n";
    }
    if ( turtle.isPositive(y)) {
        cout << "y is positive.\n";
    }
    if ( turtle.isPositive(length)) {
        cout << "length is positive.\n";
    }
    
    turtle.drawSquare(x, y, length);    

    turtle.PenDown();


    system("PAUSE");
	return 0;
}

