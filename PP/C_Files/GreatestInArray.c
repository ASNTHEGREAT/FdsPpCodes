#include<stdio.h>


int main()
{
    int a[10],c=0;
    printf("Enter 10 elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<10;j++)
    {
        if (a[j]>a[j+1])
        {
            c=a[j];
        }
        else
        {
            c=a[j+1];
        }
    }
    printf("The greatest number is %d",c);
}