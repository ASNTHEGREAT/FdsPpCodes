#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout << "Factorial of " << n << " = " << factorial(n)<<endl;
    return 0;
}
//Using Recursion
int factorial(int n)
{
    if (n>1)
    {
        return n * factorial(n-1);
    }
    else
        return 1;
}