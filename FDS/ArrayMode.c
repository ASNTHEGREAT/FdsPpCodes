#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter value for element\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d : ", i + 1);
        scanf("%d", &a[i]);
    }
    // frequency
    int count = 0, freq, mode = 0, x;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
            if (count > freq)
            {
                x = a[i];
            }
            freq = count;
        }
        if (x > mode)
        {
            mode = x;
        }
    }
    printf("\nMode is %d", mode);
    printf("\nFrequency of %d is %d", mode, freq);
}
