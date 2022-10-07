#include<stdlib.h>
#include<iostream>
//Contains functions like malloc and calloc
using namespace std;
int main(){
    //Syntax for malloc
    //ptr=(cast-type*)malloc(byte-size);
    int *ptr;
    ptr=(int*)malloc(50*sizeof(int));
    //allocating multiple memory locations dynamically using malloc function
}