#include <stdio.h>

#include <stdlib.h>

int main()

{

    int val;

    FILE *fptr;

    // The program will exit in case the file pointer fptr returns NULL.

    if ((fptr = fopen("Data.txt","r")) == NULL){

        printf("Visible error detected. Cannot open the file!");

        exit(1);

    }

    fscanf(fptr,"%d", &val);

    printf("The value of the integer n is=%d", val);

    fclose(fptr);

    return 0;

}

