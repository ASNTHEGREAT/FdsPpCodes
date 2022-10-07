#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    fp1 = fopen("data.txt","r+");
    fp2 = fopen("data1.txt","w+");
    if (fp1==NULL || fp2==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc('X',fp1);
    fputc('Z',fp2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}