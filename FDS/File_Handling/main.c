#include<stdio.h>


int main()
{
    FILE *fp;
    char ch = 'x';
    fp = fopen("data.txt","w");
    putc(ch,fp);
    fclose(fp);
    return 0;
}