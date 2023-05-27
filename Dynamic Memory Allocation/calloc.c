#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &ptr[i]);
    // }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",ptr[i]);
    }

    free(ptr);
    return 0;
}