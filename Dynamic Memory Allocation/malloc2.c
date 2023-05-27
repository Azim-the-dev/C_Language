#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    if (ptr == NULL) {
        printf("Error: Memory allocation failed");
        return 1;
    }


    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\t", ptr[i]);
    }

    free(ptr);
    return 0;
}