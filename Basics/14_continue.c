#include <stdio.h>

int main()
{
    int a = 0;

    while (a <= 10)
    {
        a++;
        printf("%d\t", a);
        if (a == 2)
        {
            break;
        }
    }

    return 0;
}