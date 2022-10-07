#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;
    for(int i=r; i>=1; i--)//rows
    {
        for(int j=i; j>=1; j--)//space column
        {
            cout<<" ";
        }
        for(int j=r;j>=i;j--)//number column
        {
            cout<<"*"<<" ";
        }
        
        cout<<"\n";
    }
    for(int i=1; i<=r; i++)//rows
    {
        for(int j=1; j<=i; j++)//space column
        {
            cout<<" ";
        }
        for(int j=r;j>=i;j--)//number column
        {
            cout<<"*"<<" ";
        }
        
        cout<<"\n";
    }
    
}