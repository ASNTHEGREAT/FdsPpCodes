#include<stdio.h>
#include<string.h>


int main()
{
    char s1[100],s2[100];
    printf("Enter string 1: ");
    scanf("%s",s1);
    printf("Enter string 2: ");
    scanf("%s",s2);
    for (int i = 0; i != '\0'; i++)
    {
        for (int j = 0; j != '\0'; j++)
        {
            if (s1[i]==s2[j])
            {
                continue;
            }
            else
            {
                printf("%s is not the substring of %s",s2,s1);
                break;
            }
        }
    }
    
    printf("%s is the substring of %s",s2,s1);
    
    return 0;
}
