#include<stdio.h>
#include<stdlib.h>

int main()
{
    char a[20];

    FILE *fp;
    fp = fopen("data.txt","r");
    if (fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while (!feof(fp))
    {
        fgets(a,5,fp);
        printf("\n%s",a);
    }
    
    // fgets(a,10,fp); //'space' is also read as a char.
    // printf("\n%s",a);
    // fgets(a,10,fp); //calling it a second time, the curser moves forward and prints next letters.
    // printf("\n%s",a);
    // fclose(fp);
    return 0;
}