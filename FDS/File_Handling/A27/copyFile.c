#include<stdio.h>
#include<stdlib.h>

int main()
{
    char n[20];
    printf("Enter the name of the file to be created: ");
    scanf("%s",n);
    FILE *fp1,*fp2;
    fp1 = fopen("f1.txt","r");
    fp2 = fopen(n,"w");
    if (fp1==NULL || fp1==NULL)
    {
        printf("error");
        exit(1);
    }
    char a[50];
    while (!feof(fp1))
    {
        fgets(a,50,fp1);
        fputs(a,fp2);
        printf("\n%s",a);
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}