#include<stdio.h>

int main(){
    int r;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    char c='A';
    for(int i=0;i<=r;i++){
        c='A';
        for(int j=0;j<i;j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
}

//Looking at ascii
/*int main(){
    char c;
    scanf("%c",&c);
    printf("%c == %d",c,c);
}*/