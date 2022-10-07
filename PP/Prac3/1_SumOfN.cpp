#include<iostream>
using namespace std;
// 	To find the sum of n natural numbers using while loop.
int main()
{
    int n, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of natural numbers till "<<n<<" is : ";
    while(n)
    {
        sum = sum + n;
        n--;
    }
    cout<<sum;
}