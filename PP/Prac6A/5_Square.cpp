#include<iostream>
using namespace std;

int sqr(int a);

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The square of "<<n<<" is : "<<sqr(n)<<endl;
    return 0;
}

int sqr(int a)
{
    return a*a;
}