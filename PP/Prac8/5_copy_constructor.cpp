#include<iostream>
using namespace std;
//Copy constructor takes a reference to an object of the same class as an argument.
//The process of initializing members of an object through a copy constructor is known as copy initialization.
//It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member by member copy basis

class Wall
{
    private:
        int x,y;
    public:
        Wall(float x1, float y1)
        {
            x = x1;
            y = y1;
        }
        //Copy Constructor
        Wall(const Wall &wall1)
        {
            x = wall1.x;
            y = wall1.y;
        }
        float getX() { return x;}
        float getY() { return y;}
};


int main()
{
    Wall wall1(10.5, 8.6);  //Calling Normal Constructor
    Wall wall2 = wall1;     //Calling Copy Constructor

    cout<<"wall1.x = "<<wall1.getX()<<", wall1.y = "<<wall1.getY()<<endl;
    cout<<"wall2.x = "<<wall2.getX()<<", wall2.y = "<<wall2.getY()<<endl;
    return 0;
}