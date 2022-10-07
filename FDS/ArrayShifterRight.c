//WAP to insert an element in the array at (i) at beginning (ii) at end (iii) between 0 to n-1.
#include<stdio.h>
const int SIZE = 9; //Macro
//To do 
//Error management

int main()
{
    int k,v,a[100]={12,23,34,5,78,89,45,87,2};
    int n=SIZE-1;
    //Inputs
    printf("Enter index you want to insert value at:  ");
    scanf("%d",&k);
    printf("\nEnter value to be inserted: ");
    scanf("%d",&v);
    //Print Original
    printf("\nOriginal Array is: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",a[i]);
    }
    //modification
    n++;//increase size by 1
    for (int i = n; i >= k; i--)
    {
        a[i]=a[i-1];
    }
    a[k-1]=v; //insert v at k-1
    
    //Print modified
    printf("\nModified Array is: ");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
}
