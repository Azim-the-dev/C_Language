#include <stdio.h>

int main()
{
    int z[2], a[3] = {1,2,3};

    z[0] = 786;
    z[1] = 7786;

    int x[] = {9,99,999,9999};

    printf("%d %d %d\n",a[0],a[1],a[2]);

    printf("%d\n%d\n",z[0],z[1]);

    printf("%u %u\n",&z[0],&z[1]);

    printf("%d %d %d\n",x[0],x[1],x[2]);

    return 0;
}