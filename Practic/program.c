#include <stdio.h>

int main()
{
    int a = 7;
    int *pointer = &a;
    int **pointer2 = &pointer;

    printf("The adress of a is %u\n", pointer);
    printf("The adress of pointer is %u\n", pointer2);
    printf("The value of a is %d\n", a);
    printf("The value of a usimg pointer is %d\n", *pointer);
    printf("The value of a usimg pointer2 is %d\n", **pointer2);
    printf("The value of a usimg pointer is %d\n", *pointer);
    printf("The value of a pointer using pointer2 is %d\n", *pointer2);

    return 0;
}