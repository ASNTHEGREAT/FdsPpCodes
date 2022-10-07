#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter value for element\n");
    for (int i = 0; i < n  ; i++)
    {
        printf("%d : ",i+1);
        scanf("%d",&a[i]);
    }
    //Print Original
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    //Calcualtion of mean, sum
    float mean,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    mean = sum/n;
    //print sum, mean, mode
    printf("\nSum of the above array is : %.2f",sum);
    printf("\nMean of the above array is : %.2f",mean);
    //printf("\nMode of the above array is : %d",mode);
}