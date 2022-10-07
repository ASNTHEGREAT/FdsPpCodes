#include<stdio.h>
#include<stdlib.h>
int min(int a, int b);
int max(int a, int b);
int arraypicker(int a[], int b[]);
int main()
{
    int n;	//Declaring size of array
    printf("Enter the size of the arrays: ");
    scanf("%d",&n);	//Taking input for size of array
    int a[n],b[n];	//Declaring array
    printf("For first array\n");
    printf("Enter value of element\n");
    for(int i=0;i<n;i++)
    {
        printf("%d : ",i+1);
        scanf("%d",&a[i]);	//Taking elemental input
    }
    printf("For second array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d : ",i+1);
        scanf("%d",&b[i]);	//Taking elemental input
    }
    //Print Original Array
    printf("First array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);	//Printing elements
    }
    printf("\n");
    printf("Second array : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);	//Printing elements
    }
    printf("\n");
    //logic
    int c[2*n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            c[j]=a[i];
            c[j+1] = b[i];
        }
        
    }
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(c[i]>c[j])
            {
                int temp;
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    
    
    //Printing C
    printf("Resultant Array is : \n");
    for (int i = 0; i < 2*n; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}

int min(int a, int b)
{
    return (a<b) ? a : b;
}
int max(int a, int b)
{
    return (a>b) ? a : b;
}