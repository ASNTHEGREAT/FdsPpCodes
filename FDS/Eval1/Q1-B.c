#include<stdio.h>


int main()
{
    int mat[100][100];
    for (int i = 0; i < 100; i++)//row
    {
        for (int j = 0; j < 100; j++)//column
        {
            mat[i][j]=255;
        }
    }
/*
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
    
    //printint the matrix
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            printf("%d ",mat[i][j]);
        }
        
    }
    

    return 0;
}*/ 