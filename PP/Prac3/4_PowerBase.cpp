#include<iostream>
using namespace std;
//To find the exponential of the entered base using while loop.
int main()
{
    int b,p,i=0,result;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"\nEnter power: ";
    cin>>p;
    while(i<=p)
    {
        result = b * b;
        i++;
    }
    cout<<b<<"^"<<p<<" is "<<result;
}