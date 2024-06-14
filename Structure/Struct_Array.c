#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float per;
};

int main()
{
    struct student S1[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name for %dth student",i+1);
        scanf("%d", &student.s1[i]);
    }
    

    return 0;
}