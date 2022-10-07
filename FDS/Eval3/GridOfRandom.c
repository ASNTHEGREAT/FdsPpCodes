#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// `M × N × O` matrix
#define M 128
#define N 256
#define O 256
 
// Dynamically allocate memory for 3D Array
int main()
{
    // dynamically allocate memory of size `M × N × O`
    int* A = (int*)malloc(M * N * O * sizeof(int));
 
    if (A == NULL)
    {
        fprintf(stderr, "Out of memory");
        exit(0);
    }
 
    // assign values to the allocated memory
    int lower = 65, upper = 90, count = 10;
    srand(time(0));

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < O; k++) {
                *(A + i*N*O + j*O + k) = (rand() % (upper - lower + 1)) + lower;
            }
        }
    }
 
    // print the 3D array
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < O; k++) {
                printf("%d ", *(A + i*N*O + j*O + k));
            }
 
            printf("\n");
        }
        printf("\n");
    }
 
    // deallocate memory
    free(A);
 
    return 0;
}