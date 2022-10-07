#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("data.txt","r");
    if (fp==NULL)
    {
        exit(1);
    }
    else
    {
        printf("%c\n",getc(fp));
    }
    fclose(fp);
    return 0;
}