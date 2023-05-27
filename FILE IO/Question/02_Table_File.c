#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("02_Table_File.txt", "w");

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "-------------------------\n");
        fprintf(ptr, "|\t%d\tX\t%d\t=\t%d\t|\n", num, i, num * i);
        fprintf(ptr, "-------------------------\n");
    }
    fclose(ptr);

    printf("The Multplication table of %d has been saved as 'txt' file! ",num);

    return 0;
}