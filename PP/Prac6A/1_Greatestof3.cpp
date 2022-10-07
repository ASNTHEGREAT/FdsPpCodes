#include<iostream>
using namespace std;

int greatest(int a, int b, int c);

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    cout<<"Greatest number in "<<a<<" "<<b<<" "<<c<<" is : "<<greatest(a,b,c)<<endl;
    return 0;
}

int greatest(int a, int b, int c)
{
    return (a>b)? ((a>c) ?  a :  c) : ((b>c) ?  b :  c);
}