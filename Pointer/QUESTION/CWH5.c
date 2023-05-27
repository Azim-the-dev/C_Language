#include <stdio.h>

int main()
{
    int i = 10;
    int *point1 = &i;
    int **point2 = &point1;

    printf("The value of i by using 2nd pointer: %d", **point2);

    return 0;
}