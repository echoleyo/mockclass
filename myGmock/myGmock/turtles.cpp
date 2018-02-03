/*
virtual ~Turtle() {}
virtual void PenUp() = 0;
virtual void PenDown() = 0;
virtual void Forward(int distance) = 0;
virtual void Turn(int degrees) = 0;
virtual void GoTo(int x, int y) = 0;
virtual int GetX() const = 0;
virtual int GetY() const = 0;
        */
#include <iostream>

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