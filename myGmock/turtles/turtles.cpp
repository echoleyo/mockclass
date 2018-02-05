
#include <iostream>
#include "turtles.h"

using namespce std;

Turles:Turles()
{
    cout<<"Turles instanted\n" << endl;    
};

void Turtles::PenUp()
{
    cout<<"Put pen up." << endl;    
}

void Turtles::PenDown()
{
    cout<<"Put pen down." << endl;    
}

void Turtles::Forward(int distance)
{
    cout<<"forward: " << distance << endl;    
}

void Turtles::Turn(int degrees)
{
    cout<<"Turn: " << degrees << endl;    
}

void Turtles::GoTo(int x, int y)
{
    point_x = x;
    point_y = y;
    cout<<"Go to point: (" << x << ","<< y << ")" << endl;    
}

int Turtles::GetX()
{
    return point_x;
}

int Turtles::GetY()
{
    return point_y;
}

bool Turtles::isPositive(int x)
{
    bool rc = false;
    if (x > 0){
        rc = true; 
    }
    return rc;
}

void Turtles::drawSquare(int x, int y, int length)
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