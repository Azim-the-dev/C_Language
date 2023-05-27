#include <stdio.h>

int main()
{
    int mark[10];
    int i = 0, z = 0;

    while(i < 10)
    {
        printf("%d Student Number: ", i + 1);// here i + 1 manes (i mai 1 add hoga fir print hoga) naki i ka increment hoga
        scanf("%d", &mark[i]);
        i++;
    }

    while (z < 10)
    {
        printf("%d Student Number: %d\n", z + 1, mark[z]);
        z++;
    }

    return 0;
}
