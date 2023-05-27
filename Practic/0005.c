#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;

    printf("The adress of a is: %u\n",ptr);

    ptr --;

    printf("The adress of a is: %u\n",ptr);

    return 0;
}