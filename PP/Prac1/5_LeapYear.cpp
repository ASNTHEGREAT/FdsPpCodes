#include<iostream>
using namespace std;

void ifLeap(int a);

int main()
{
    int n;
    cout<<"Enter Year: ";
    cin>>n;
    ifLeap(n);
}

void ifLeap(int a)
{
    if(a%4==0)
    {
        cout<<a<<" is a Leap Year.";
    }
    else
    {
    {
        cout<<a<<" is not a Leap Year.";
    }
    }
}