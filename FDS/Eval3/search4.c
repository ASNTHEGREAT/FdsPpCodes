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
    int *A = (int *)malloc(M * N * O * sizeof(int)); // pointer in RAM
    FILE *fp, *fp2, *fp3;                            // file pointer to hardisk
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
    fclose(fp);

    // search for values
    if ((fp2 = fopen("Grid.csv", "r")) == NULL)
    {
        printf("Visible error detected. Cannot open the file!");
        exit(1);
    }
    if ((fp3 = fopen("Output.txt", "w")) == NULL)
    {
        printf("Visible error detected. Cannot open the file!");
        exit(1);
    }
    int counter = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            for (k = 0; k < O; k++)
            {
                //*(A + i*N*O + j*O + k) = (rand() % (upper - lower + 1)) + lower;
                if (*(A + i * N * O + j * O + k) == (char)83) // S
                {
                    counter = 1;
                    if (*(A + i * N * O + j * O + k + 1) == (char)73) // I
                    {
                        counter = 2;
                        if (*(A + i * N * O + j * O + k + 2) == (char)84) // T
                        {
                            counter = 3;
                            if (*(A + i * N * O + j * O + k + 3) == (char)78) // N
                            {
                                counter = 4;
                                if (*(A + i * N * O + j * O + k + 4) == (char)65) // A
                                {
                                    counter = 5;
                                    if (*(A + i * N * O + j * O + k + 5) == (char)71) // G
                                    {
                                        counter = 6;
                                        if (*(A + i * N * O + j * O + k + 6) == (char)80) // P
                                        {
                                            counter = 7;
                                            if (*(A + i * N * O + j * O + k + 7) == (char)85) // U
                                            {
                                                counter = 8;
                                                if (*(A + i * N * O + j * O + k + 8) == (char)82) // R
                                                {
                                                    counter = 9;
                                                    printf("SITNAGPUR found at (%d, %d, %d)\n", i, j, k);
                                                    fprintf(fp3, "SITNAGPUR found at (%d, %d, %d)\n", i, j, k);
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
    switch (counter)
    {
    case 1:
        printf("Only S available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only S available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 2:
        printf("Only SI available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only SI available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 3:
        printf("Only SIT available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only SIT available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 4:
        printf("Only SITN available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only SITN available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 5:
        printf("Only SITNA available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only SITNA available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 6:
        printf("Only SITNAG available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only SITNAG available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 7:
        printf("Only SITNAGP available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only SITNAGP available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 8:
        printf("Only SITNAGPU available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        fprintf(fp3, "Only SITNAGPU available in SITNAGPUR at (%d, %d, %d)\n", i, j, k);
        break;
    case 9:
        printf("STRING IS PRESENT");
        break;

    default:
        printf("Counter did not work");
        break;
    }

    // deallocate memory
    free(A);
    fclose(fp2);
    fclose(fp3);

    return 0;
}