#include<stdio.h>

int main(){
    int r;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    char c='A';
    for(int i=0;i<r;i++){
        c='A';
        for(int j=r;j>i;j--){
            printf(" ");   
        }
        for(int j=0;j<i;j++){
            printf("%c%c",c,c+1);
            //printf("%c",c);
            c++;
        }
        printf("\n");
    }
}