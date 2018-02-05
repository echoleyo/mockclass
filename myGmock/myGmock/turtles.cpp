#include "stdafx.h"
#include <iostream>

#include "turtles.h"

using namespace std;

Turtles::Turtles()
{
    cout<<"Turtles init.\n";
}
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
    return x > 0;
}

void Turtles::drawSquare(int x, int y, int length)
{
    system("PAUSE");
    GoTo(x, y);
    Turn(90);
    Forward(length);
    Turn(90);
    Forward(length);
    Turn(90);
    Forward(length);
    Turn(90);
    Forward(length);
}