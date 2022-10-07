#include<iostream>
using namespace std;

int vol(int);
float vol(float);
float vol(float, float);

class Volume
{
    public:
    int vol(int side)
    {
        return(side*side*side);
    }
    float vol(float rad)
    {
        return ((3.14*rad*rad*rad*4)/3);
    }
    float vol(float rad, float height)
    {
        return (3.14*rad*rad*height);
    }
};

int main()
{
    Volume X;
    int side,length,breadth;
    float rad, height;
    cout<<"Enter side of cube: ";
    cin>>side;
    cout<<"Enter radius of sphere: ";
    cin>>rad;
    cout<<"Enter radius and height: ";
    cin>>rad>>height;
    cout<<"Volume of cube is : "<<X.vol(side)<<endl;
    cout<<"Volume of sphere is : "<<X.vol(rad)<<endl;
    cout<<"Volume of cylinder is : "<<X.vol(rad, height)<<endl;
}