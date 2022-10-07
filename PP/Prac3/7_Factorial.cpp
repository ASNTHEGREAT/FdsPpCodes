#include<iostream>
using namespace std;


int main()
{
    int n,m, f=1;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    do
    {
        f = f*n;
        n--;
    }while(n>=1);
    cout <<"Factorial of "<< m <<" is: "<< f;
    return 0;
}