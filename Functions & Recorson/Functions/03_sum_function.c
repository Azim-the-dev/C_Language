#include <stdio.h>

int azim(int a, int b);
int main()
{
    int res;
    res = azim(55, 5);
    printf("NUM %d", res);
    return 0;
}

int azim(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
