#include<stdio.h>

int fibo(int a);
void fiboPrint(int a);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fiboPrint(n);
    return 0;
}

int fibo(int a)
{
    return (a>1) ? fibo(a-1) + fibo(a-2) : ((a==0) ? 0 : 1);
}

void fiboPrint(int a)
{
    int k;
    for (int i = 0; i <= a; i++)
    {
        printf("%d\t",fibo(i));
    } 
}