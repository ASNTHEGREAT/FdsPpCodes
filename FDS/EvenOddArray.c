/*Write a program in C to find the number of even numbers in an array.(n=10)
The elements of the array should be taken from the user.*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value for element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //Direct Print
    //Even
    printf("\nEven numbers are: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
    }
    //Odd
    printf("\nOdd numbers are: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            printf("%d ",a[i]);
        }
    }
    
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] % 2 == 0)
            {
                b[j]=a[i];
            }
            else
            {
                c[j]=a[i];
            }

        }
    }
    //Print even
    printf("\nEven numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    //Print Odd
    printf("\nOdd numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",c[i]);
    }*/
    
    
}