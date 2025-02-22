

class Animal {
    public:
        //virtual ~Animal() {};
        virtual void PenUp() = 0;
        virtual void PenDown() = 0;
        virtual void Forward(int distance) = 0;
        virtual void Turn(int degrees) = 0;
        virtual void GoTo(int x, int y) = 0;
        virtual int GetX() const = 0;
        virtual int GetY() const = 0;
    protected:
        int point_x;
        int point_y;
};