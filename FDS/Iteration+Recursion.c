#include<stdio.h>
#include<stdlib.h>
int recursivesum(int number){
    if(number==1){
        
    }
}
int main(){
    int number,index,sum=0;
    printf("Enter the number\n");
    scanf("%d", &number);
    //The iterative incremental approach
    for(index=1;index<=number;index++){
        sum+=index;
    }
    printf("The sum using iteration(incremental) is %d", sum);
    for(index=number;index>=1;index--){
        sum=sum+index;
    }
    printf("The sum using iteration(decremental) is %d", sum);
    return 0;
}