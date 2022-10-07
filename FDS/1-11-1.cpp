// The series is 1+3+5+7..
#include<stdio.h>
int main(){
    int numberofterms,index,firstterm=1;
    printf("Enter the number of terms");
    scanf("%d", &numberofterms);
    printf("%d\t", firstterm);
    for(index=1;index<numberofterms;index++){
        firstterm=firstterm*-1;
        printf("%d\t", firstterm);
    }
    return 0;
}