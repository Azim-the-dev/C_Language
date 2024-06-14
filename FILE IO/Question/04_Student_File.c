#include <stdio.h>

struct student
{
    char name[20];
    int roll;
    float per;
}S1[3];


int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter %dth student name: ",i+1);
        scanf("%s",S1[i].name);

        printf("\nEnter %dth student roll-number: ",i+1);
        scanf("%d",&S1[i].roll);

        printf("\nEnter %dth student pertange: ",i+1);
        scanf("%f",&S1[i].per);
    }

    FILE *ptr;
    ptr = fopen("04_Student_File.txt","w");

    for (int i = 0; i < 3; i++)
    {
        fprintf(ptr, "\n ----------------------------------------------- \n");
        fprintf(ptr, "|\tThe name of %dth student is: %s\t\t\t|\n",i+1,S1[i].name);

        fprintf(ptr, "|\tThe roll-number of %dth student is: %d\t\t|\n",i+1,S1[i].roll);

        fprintf(ptr, "|\tThe pertange of %dth student is: %.2f\t\t|\n",i+1,S1[i].per);
        fprintf(ptr, " ----------------------------------------------- \n");
    }

    fclose(ptr);
    printf("File sucessfully saved!");
    return 0;
}