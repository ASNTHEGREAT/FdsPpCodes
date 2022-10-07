#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter number of rows: ";
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=r;j>i;j--){
            cout<<" ";   
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        printf("\n");
    }
}
    
