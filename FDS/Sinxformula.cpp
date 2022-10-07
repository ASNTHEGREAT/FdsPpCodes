#include<stdio.h>
#include<math.h>
int main(){
    float index;
    int counter=1;
    float x;
    float sum=0.0;
    printf("Enter the value");
    scanf("%f", &x);
    for(index=1;index<13;index=index+2){
        if(counter%2==0){
            float fact=1.0;
            float i=index;
            while(i!=0){
                fact=fact*i;
                i--;
            }
            sum-=((pow(x,index))/fact);
        }
        else{
            float fact=1.0;
            float i=index;
            while(i!=0){
                fact=fact*i;
                i--;
            }
            sum+=((pow(x,index))/fact);
        }
        counter++;
    }
    printf("%f", sum);
    return 0;
}