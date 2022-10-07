#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt","w");
    char a[20]= "sachin joshi";
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputs(a,fp);
    fclose(fp);
    return 0;
}