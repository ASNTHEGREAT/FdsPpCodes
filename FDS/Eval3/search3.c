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
    int *A = (int *)malloc(M * N * O * sizeof(int));
    FILE *fp, *fp2;
    if ((fp = fopen("Grid.csv", "w")) == NULL)
    {
        printf("Visible error detected. Cannot open the file!");
        exit(1);
    }

    if (A == NULL)
    {
        fprintf(stderr, "Out of memory");
        exit(0);
    }

    // assign values to the allocated memory
    int lower = 65, upper = 90;
    srand(time(0));

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < O; k++)
            {
                //*(A + i*N*O + j*O + k) = (rand() % (upper - lower + 1)) + lower;
                fprintf(fp, "%c, ", (char)(*(A + i * N * O + j * O + k) = (rand() % (upper - lower + 1)) + lower));
            }
            fprintf(fp, "\n");
        }
        fprintf(fp, "\n");
    }

    // search for values
    if ((fp2 = fopen("Grid.csv", "r")) == NULL)
    {
        printf("Visible error detected. Cannot open the file!");
        exit(1);
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < O; k++)
            {
                //*(A + i*N*O + j*O + k) = (rand() % (upper - lower + 1)) + lower;
                if (*(A + i * N * O + j * O + k) == (char)83)
                {
                    if (*(A + i * N * O + j * O + k + 1) == (char)73)
                    {
                        if (*(A + i * N * O + j * O + k + 2) == (char)84)
                        {
                            if (*(A + i * N * O + j * O + k + 3) == (char)78)
                            {
                                if (*(A + i * N * O + j * O + k + 4) == (char)65)
                                {
                                    if (*(A + i * N * O + j * O + k + 5) == (char)71)
                                    {
                                        if (*(A + i * N * O + j * O + k + 6) == (char)80)
                                        {
                                            if (*(A + i * N * O + j * O + k + 7) == (char)85)
                                            {
                                                if (*(A + i * N * O + j * O + k + 8) == (char)82)
                                                {
                                                    printf("SITNAGPUR found at (%d, %d, %d)\n", i, j, k);
                                                    return 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // deallocate memory
    free(A);
    fclose(fp);
    fclose(fp2);

    return 0;
}