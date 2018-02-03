
#include "animal.h"

class Turtles : public Animal
{
    public:
        int point_x;
        int point_y;
         ~Turtles() {};
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