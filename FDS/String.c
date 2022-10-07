#include<stdio.h>


int main()
{
    char str[20];
    printf("\nEnter Your Name : ");
    //scanf("%s",str);
    gets(str);
    printf("\nYour Name = %s",str);
    return 0;
}