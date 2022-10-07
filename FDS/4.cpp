#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};
    int *ptr,i;
    ptr=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        *(ptr+i)=array[i];
    }
    for(i=0;i<5;i++){
        cout<<endl<<*(ptr+i);
    }
}