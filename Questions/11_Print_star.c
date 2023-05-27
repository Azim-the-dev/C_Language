// Write a Program to print a triangle of stars as follows (take number of lines from user).
// *
// ***
// *****
// *******

#include <stdio.h>

int main()
{
    int lines;

    printf("Enter the number of lines: ");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++)
    {
        for (int z = 1; z <= 2 * i - 1; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}