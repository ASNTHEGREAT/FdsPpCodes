#include<iostream>
using namespace std;


int main()
{
    int b,p,i=0,result;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"\nEnter power: ";
    cin>>p;
    do 
    {
        result = b * b;
        i++;
    }while(i<=p);
    cout<<b<<"^"<<p<<" is "<<result<<endl;
    return 0;
}