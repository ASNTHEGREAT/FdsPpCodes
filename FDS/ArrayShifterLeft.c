#include<stdio.h>


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
    //Modification 
    printf("\nEnter the index to be deleted: ");
    scanf("%d",&k);
    for (int i = k ; i < n-1; i--)
    {
        a[i]=a[i+1];
    }
    n--;
    //Print modified 
    printf("\nModified Array after deletion is: ");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
}
