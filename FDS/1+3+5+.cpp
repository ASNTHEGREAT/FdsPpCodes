// The series is 1+3+5+7..
#include<stdio.h>
int main(){
    int numberofterms,index,firstterm=1;
    int nextterm=firstterm;
    printf("Enter the number of terms");
    scanf("%d", &numberofterms);
    printf("%d\t", firstterm);
    for(index=1;index<numberofterms;index++){
        nextterm=nextterm+2;
        printf("+%d\t", nextterm);
    }
    return 0;
}