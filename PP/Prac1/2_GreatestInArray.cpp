#include<iostream>
using namespace std;

int main()
{
    int n,g;
    cout<<"Enter length of Array: ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter value for element"<<i+1<<":";
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]>a[i+1])
        {
            g=a[i];
        }
        else
        {
            g=a[i+1];
        }
    }
    cout<<g<<"is the greatest number.";
}