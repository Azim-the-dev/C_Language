#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;

    printf("a = %d\n", a);
    printf("a = %u\n\n", *p);

    *p = 0; //this will change the value of a without using a

    printf("a = %d\n", a);
    printf("a = %d\n\n", *p);

    (*p)++;

    printf("a = %d\n", a);
    printf("a = %d\n\n", *p);

    *p += 7;

    printf("a = %d\n", a);
    printf("a = %d\n\n", *p);

    return 0;
}