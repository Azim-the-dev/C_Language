#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",ptr[i]);
    }

    // printf("INT: %d\n",sizeof(int));
    // printf("FLOAT: %d\n",sizeof(float));
    // printf("CHAR %d\n",sizeof(char));


    free(ptr);
    return 0;
}