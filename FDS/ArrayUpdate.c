/*WAP to update the array, (i) alternate index value should be doubled 
(ii) double two consecutive indexes with alternate pairs. 
(iii) array is split into two halves and both halves are reversed.*/
#include<stdio.h>
#include<stdlib.h>

//todo:
//1. Take user input for elements

/*void alternateDoubler(int p[]);
void pairDoubler(int q[]);
void halfReverse(int r[]);
void swap(int a[], int);*/


int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={1,2,3,4,5,6,7,8,9,10};
    int c[10]={1,2,3,4,5,6,7,8,9,10};
    //Print Original 
    printf("Before Updating: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
    //Update function (Method 1 - Logic in UDF)
    alternateDoubler(a);
    pairDoubler(b);
    halfReverse(c);
/*
    //Method 2 - logic in main
    //alternateDoubler
    for (int i = 0; i < 10; i++)
    {
        if(i%2!=0)
        {
            a[i]= a[i]*2;
        }
    }
    //pairDoubler
    for (int i = 2; i < 10; i+=4)
    {
        b[i] = b[i] * 2;
        b[i+1] = b[i+1] * 2;
    }
    //halfReverse
    size_t n = sizeof(c)/sizeof(c[0]); //To find size of array
    //int *p;
    int temp;
    //p=malloc(sizeof(int)*n);
    for(int i=0,j=(n/2)-1;i<j;i++,j--)
    {
        temp=c[i];
		c[i]=c[j];
		c[j]=temp;
    }
    for(int i=n/2,j=n-1;i<j;i++,j--)
	{
		temp=c[i];
		c[i]=c[j];
		c[j]=temp;
	}*/

    //Print Updated
    printf("\nAfter Updating for alternate values : "); //1
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nAfter Updating for alternate values : "); //2
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\nAfter Updating for reversing in mid, values : "); //3
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",c[i]);
    }


}

//To double alternate indexes
void aternateDoubler(int p[])
{
    for (int i = 0; i < 10; i++)
    {
        if(i%2!=0)
        {
            p[i]= p[i]*2;
        }
    }
}
//To double two consecutive pairs
void pairDoubler(int q[])
{
    for (int i = 2; i < 10; i=i+4)
    {
        q[i] = q[i] * 2;
        q[i+1] = q[i+1] * 2;
    }
    
}

//Split array into two halves and reverse both halves 
void halfReverse(int r[]) //(using pointers)
{
    //int *p;
    int temp;
    //p=malloc(sizeof(int)*n);
    for(int i=0,j=(10/2)-1;i<j;i++,j--)
    {
        temp=r[i];
		r[i]=r[j];
		r[j]=temp;
    }
    for(int i=10/2,j=10-1;i<j;i++,j--)
	{
		temp=r[i];
		r[i]=r[j];
		r[j]=temp;
	}

}

//Swap funtion to check error
void swap(int a[], int n)
{
    for (int low = 0, high = n - 1; low < high; low++, high--)
    {
        int temp = a[low];
        a[low] = a[high];
        a[high] = temp;
    }
}
