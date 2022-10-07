//to find sum of 100 natural numbers
#include<iostream>
using namespace std;


void sum(int a);

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of natural numbers till "<<n<<" is : ";
    sum(n);
}

void sum(int a)
{
    int sum=0;
    for (int i = 0; i <= a; i++)
    {
        sum = sum + i;
    }
    cout<<sum;
}