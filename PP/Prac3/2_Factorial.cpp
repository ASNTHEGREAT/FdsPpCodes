#include<iostream>
using namespace std;
//	A) To find factorial of a number using while loop.

int main()
{
    int n,m, f=1;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    while(n>=1)
    {
        f = f*n;
        n--;
    }
    cout <<"Factorial of "<< m <<" is: "<< f;
}
