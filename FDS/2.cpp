#include<iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};
    int *ptr;
    int index;
    for(index=0;index<5;index++){
        printf("%d\t", array[index]);
    }
    ptr=array;
    for(index=0;index<5;index++){
        printf("%d\t", *(ptr+index));
    }
    /*printf("\n%d", ptr);
    printf("\n%d", array);
    printf("\n%d", &ptr);
    printf("\n%d", *ptr);*/
}