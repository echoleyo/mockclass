#include "stdafx.h"
#include <iostream>
//#include "animal.h"

using namespace std;

//class Turtles : public Animal
class Turtles
{
    public:
        Turtles(){};
         ~Turtles() { cout << "Turtles is derived.";};
         int point_x;
         int point_y;
         void PenUp();
         void PenDown();
         void Forward(int distance);
         void Turn(int degrees);
         void GoTo(int x, int y);
         int GetX() const;
         int GetY() const;
         bool isPositive(int x);
         void drawSquare(int x, int y, int length);
};