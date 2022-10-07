#include<stdio.h>

void swap(int a[], int n);   //Prototype

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


int main(){
    int n,j,m;
    printf("Enter number of elements: ");
    scanf("%d",&n); //Input for size of array
    //Check wheather even or odd
    m = (n%2==0)? (n/2) : (n/2)+1;
    
    int A[n];//Taking elemental input
    for(int i=0;i<n;i++)
    {
        printf("\nEnter value of element %d :",i+1);
        scanf("%d",&A[i]);
    }

    //Printing original
    printf("\nEntered array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    //Swapping
    swap(A,n);
    
    //Printing after swap
    printf("\n");
    printf("\nReversed array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}