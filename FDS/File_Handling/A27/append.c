#include<stdio.h>
#include<stdlib.h>

int main()
{
    char n[20];
    printf("Enter the name of the file to be created: ");
    scanf("%s",n);
    FILE *fp2;
    fp2 = fopen(n,"a");
    if (fp2==NULL)
    {
        printf("error");
        exit(1);
    }
    char a[50];
    printf("Enter text: ");
    scanf("%s",a);
    fputs(a,fp2);
    fgets(a, 10, fp2);
    fclose(fp2);

    return 0;
}