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
    return (n>1) ? n*factorial(n-1) : 1;
}