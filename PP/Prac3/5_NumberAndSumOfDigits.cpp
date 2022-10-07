//To count the number of digits in any number using while loop and find the sum of digits.
#include<iostream>
using namespace std;

int main()
{
    int n,n1,d,count=0,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    n1=n;
    while (n1>0)
    {
        d=n1%10;
        count++;
        sum += d;
        n1=n1/10;
    }
    cout<<"Numeber of digits is : "<<count<<endl;
    cout<<"Sum of all digits is : "<<sum<<endl; 
    return 0;
}
