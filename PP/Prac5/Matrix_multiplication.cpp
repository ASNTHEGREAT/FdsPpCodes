#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

//rows for A should be equal to coloumns of b and 
int main()
{
    //Input for A
    int r1,c1;
    cout<<"Enter number of rows and columns for A: ";
    cin>>r1>>c1;
    //Find larger
    int l,s;
    l = max(r1,c1);
    s = min(r1,c1);
    int a[r1][c1];
    cout<<"Enter elements for A: ";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
    }
    //Input for B
    cout<<"The rows and columns for B have been interchanged with respect to A "<<endl;
    int b[c1][r1];
    cout<<"Enter elements for B: ";
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cin>>b[i][j];
        }
    }
    //Print A and B
    //A
    cout<<"A: "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout<<setw(3)<<a[i][j];
        }cout<<endl;
    }
    cout<<endl;
    //B
    cout<<"B: "<<endl;
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            cout<<setw(3)<<b[i][j];
        }cout<<endl;
    }
    cout<<endl;
    //Logic
    cout<<"Result: "<<endl;
    int c[l][l];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < s; k++)
            {
                c[i][j]+=a[i][k]*b[k][j]; 
            }
            cout<<setw(3)<<c[i][j];
        }cout<<endl;
    }
}