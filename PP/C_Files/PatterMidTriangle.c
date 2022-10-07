#include<stdio.h>

int main()
{
    int r;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=r;j>i;j--){
            printf(" ");   
        }
        for(int j=0;j<i;j++){
            printf("*");
            printf("*");
        }
        /*for(int j=0;j<i;j++){
            printf("*");
        }*/
        printf("\n");
    }
    /*for(int i=0;i<=r;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    
}

/*int main()
{
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            printf("*");
        }
        printf("\n");
    }
}*/