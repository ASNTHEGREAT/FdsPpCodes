#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
    if ((fp = fopen("Grid.txt", "w")) == NULL)
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
                fprintf(fp, "%c", (char)(*(A + i * N * O + j * O + k) = (rand() % (upper - lower + 1)) + lower));
            }
            fprintf(fp, "\n");
        }
        fprintf(fp, "\n");
    }
    fclose(fp);

    //searching
    char SearchText[] = "SITNAGPUR";
    char temp[8388608];
    rewind(fp2);
    if ((fp2 = fopen("Grid.txt", "r")) == NULL)
    {
        printf("Visible error detected. Cannot open the file!");
        exit(1);
    }
    //Output
    if ((fp3 = fopen("Output.txt", "w")) == NULL)
    {
        printf("Visible error detected. Cannot open the file!");
        exit(1);
    }
    int count, i;
    count = strlen(SearchText);
    while (!feof(fp2))
    {
        for(i=0;i<count;i++) temp[i]=fgetc(fp);
        temp[i]='\0';
        if(stricmp(SearchText,temp)==0) /* the stricmp() is used for comparing both string. */
        {
            printf("FOUND");
            exit(1);
        }
    }
    


    // deallocate memory
    free(A);
    fclose(fp2);
    fclose(fp3);

    return 0;
}