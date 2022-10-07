#include<iostream>
using namespace std;
int main(){
    int variable_1=10;;
    printf("The value of variable_1 is%d\n", variable_1);
    printf("\n----------------------\n");
    //& is used to store/denote the address of the variable
    printf("The address of the variable_1 is %u", &variable_1);

    
    //The pointer declaration
    int*ptr=&variable_1;
    //ptr is a variable to address the variable of integer type
    printf("\n%d", ptr);
    printf("\n%d", *ptr);
    
    char name[20]="SITNAGPUR";
    char *ptr1=name;
    printf("\n%d", ptr1);
    printf("\n%c", (*ptr1+3));
    printf("\n%c", *(ptr1+3));
}