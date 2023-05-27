#include <stdio.h>

int main()
{
    int student;
    int subject;

    int mark[student][subject];

    printf("Enter How many students: ");
    scanf("%d", &student);

    printf("Enter How many subjects: ");
    scanf("%d", &subject);

    for (int i = 0; i < student; i++)
    {
        for (int z = 0; z < subject; z++)
    {
        printf("([%d][%d])  Enter %dth student %dth sub: ",i,z,i+1,z+1);
        //printf("%d %d",i,z);
        scanf("%d",&mark[i][z]);
    }
    }
    printf("----------------------------------\n");
    for (int i = 0; i < student; i++)
    {
        for (int z = 0; z < subject; z++)
    {
        printf("The mark of %dth student %dth sub: %d\n\n",i+1,z+1,mark[i][z]);
    }
    }

    return 0;
}