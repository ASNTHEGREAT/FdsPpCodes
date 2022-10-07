#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **arr, i, j, k, blocks=128, rows=256, cols=256;
    //printf("\nEnter the  number of blocks, rows and columns in the array: ");
    //scanf("%d %d %d", &blocks, &rows, &cols);
    //initialize blocks
    arr = (int ***)malloc(blocks*sizeof(int **));   //pointer to pointer to pointer to int
    if (arr == NULL)    
    {
        printf("\n Memory could not be allocated");
        exit(-1);
    }
    //initialize rows
    for ( i = 0; i < blocks; i++)
    {
        arr[i]= (int **)malloc(rows*sizeof(int *));     //pointer to pointer to int
        if (arr == NULL)    
        {
            printf("\n Memory could not be allocated");
            exit(-1);
        }
    }
    //initialize columns
    for ( i = 0; i < blocks; i++)
    {
        for ( j = 0; j < rows; j++)
        {
            arr[i][j]= (int *)malloc(cols*sizeof(int));     //pointer to int
            if (arr == NULL)    
            {
                printf("\n Memory could not be allocated");     
                exit(-1);
            }
        }
    }
    //Assigning values
    for ( i = 0; i < blocks; i++)
    {
        for ( j = 0; j < rows; j++)
        {
            for ( k = 0; k < cols; k++)
            {
                *(arr + i*rows*cols + j*cols + k) = 1;
            }   
        }
    }
    //moifying center cells
    for ( i = 0; i < blocks; i++)
    {
        for ( j = 127; j <= 128; j++)
        {
            for ( k = 127; k <= 128; k++)
            {
                *(arr + i*rows*cols + j*cols + k) = 5;
            }
        }
    }
    
    //printing output
    for (int i = 0; i < blocks; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            for (int k = 0; k < cols; k++) {
                printf("%d ", *(arr + i*rows*cols + j*cols + k));
            }
            printf("\n");
        }
        printf("\n");
    }
    //deallocate memory
    free(arr);

    return 0;
}