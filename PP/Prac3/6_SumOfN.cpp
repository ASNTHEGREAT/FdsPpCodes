#include<iostream>
using namespace std;


int main()
{
    int n, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of natural numbers till "<<n<<" is : ";
    do
    {
        sum = sum + n;
        n--;
    }while(n>0);
    cout<<sum<<endl;
    
    return 0;
}