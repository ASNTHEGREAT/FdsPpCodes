#include<stdio.h>
#include<string.h>

int main()
{
    char string1[50], string2[50];
    printf("Enter string 1: ");
    scanf("%s",string1);
    printf("Enter string 2: ");
    scanf("%s",string2);
    int matrix_1[50][50];
    //Initializing values of matrix
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            matrix_1[i][j]=0;
        }
        
    }
    //Updating matrix
    for (int i = 0; i < strlen(string1); i++)       
    {
        for (int j = 0; j < strlen(string2); j++)
        {
            if (string1[i]==string2[j])
            {
                matrix_1[i][j]=255;
            }
            else
            {
                matrix_1[i][j]=999;
            }
        }
    }
    //printing the matrix
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            printf("%d ",matrix_1[i][j]);
        }
        printf("\n");        
    }
    
    
    return 0;
}