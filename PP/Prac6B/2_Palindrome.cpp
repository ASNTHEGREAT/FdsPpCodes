#include <iostream>  
using namespace std;  

void palindrome(int n);

int main()  
{  
  int n;    
  cout<<"Enter the Number=";    
  cin>>n;    
  palindrome(n);
  return 0;  
}  

void palindrome(int n)
{
    int r,sum=0,temp;
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)
    { 
        cout<<"Number is Palindrome.";    
    }
    else
    { 
        cout<<"Number is not Palindrome.";  
    }
}