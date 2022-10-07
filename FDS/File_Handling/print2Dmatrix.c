#include<stdio.h>


int main()
{
    int i,j,k;
    FILE *fp;
    fp = fopen("m2.csv","w");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            for ( k = 0; k < 5; k++)
            {
                fprintf(fp,"%d,",i+j);
            }
            fprintf(fp,"\n");
        }
        fprintf(fp,"\n");
    }
    
    return 0;
}