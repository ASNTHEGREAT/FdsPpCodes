#include<iostream>
#include<cmath>
using namespace std;

float Area(int a);
float Perimeter(int a);

int main()
{
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    cout<<"Area of the circle : "<<Area(r)<<endl;
    cout<<"Perimeter of the circle : "<<Perimeter(r)<<endl;
    return 0;
}

float Area(int a)
{
    return M_PI * a * a;
}

float Perimeter(int a)
{
    return M_PI * 2 * a;
}