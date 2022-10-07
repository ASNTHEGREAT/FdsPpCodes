#include<iostream>
using namespace std;

void ifEven(int a);;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Even numbers from "<<n<<" to 1 are : ";
    ifEven(n);
    return 0;
}

void ifEven(int a)
{
    for (int i = a; i > 0; i--)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
}