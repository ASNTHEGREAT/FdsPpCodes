#include<iostream>
using namespace std;


int main()
{
    int n,n1,d,count=0,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    n1=n;
    do 
    {
        d=n1%10;
        count++;
        sum += d;
        n1=n1/10;
    }while (n1>0);
    cout<<"Numeber of digits is : "<<count<<endl;
    cout<<"Sum of all digits is : "<<sum<<endl;
    return 0;
}