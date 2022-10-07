#include<stdio.h>

int main()
{
    struct student  //structure name
    {
        int roll[5];    //structure member
        char name[5][10];
        int marks[5];
    }s; //structure variable
    for (int i = 0; i < 5; i++)
    {
        printf("Enter roll, name and marks of student %d: ",i+1);
        scanf("%d %s %d",&s.roll[i],&s.name[i],&s.marks[i]);
    }
    printf("\n\nRoll No\tName\tMarks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t%d\n",s.roll[i],s.name[i],s.marks[i]);
    }
    return 0;
}