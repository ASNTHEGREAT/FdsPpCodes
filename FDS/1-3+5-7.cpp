#include<stdio.h>
int main(){
    int numberofterms,index,firstterm=1;
    int nextterm=firstterm;
    printf("Enter the number of terms");
    scanf("%d", &numberofterms);
    printf("%d\t", firstterm);
    for(index=1;index<numberofterms;index++){
        if(nextterm>0){
            nextterm=nextterm+2;
            nextterm=nextterm*-1;
            printf("%d\t", nextterm);
        }
        else{
            nextterm=nextterm*-1;
            nextterm=nextterm+2;
            printf("%d\t", nextterm);
        }
    }
    return 0;
}