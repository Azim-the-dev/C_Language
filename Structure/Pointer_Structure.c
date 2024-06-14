#include <stdio.h>

struct num
{
    int a;
    int b;
};

int main()
{
    struct num n1;
    struct num *n2;

    n2 = &n1;
    (*n2).a = 100000;
    n2->b = 200000;

    printf("%d\t%d", n1.a, n1.b);

    return 0;
}