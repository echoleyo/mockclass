
#include <iostream>
#include "turtles.h"

using namespce std;

void Turtles::PenUp()
{
    cout<<"Put pen up." << endl;    
}

void Turles::PenDown()
{
    cout<<"Put pen down." << endl;    
}

void Turles::Forward(int distance)
{
    cout<<"forward: " << distance << endl;    
}

void Turles::Turn(int degrees)
{
    cout<<"Turn: " << degrees << endl;    
}

void Turles::GoTo(int x, int y)
{
    point_x = x;
    point_y = y;
    cout<<"Go to point: (" << x << ","<< y << ")" << endl;    
}

int Turles::GetX()
{
    return point_x;
}

int Turles::GetY()
{
    return point_y;
}

bool Turles::isPositive(int x)
{
    bool rc = false;
    if (x > 0){
        rc = true; 
    }
    return rc;
}

void Turles::drawSquare(int x, int y, int length)
{
    Goto(x, y);
    Forward(length);
    Turn(90);
    Forward(length);
    Turn(90);
    Forward(length);
    Turn(90);
    Forward(length);
}