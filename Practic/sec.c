#include <stdio.h>

int main()
{
    int n, n2;
    FILE *ptr;
    ptr = fopen("azim.txt", "r");
    fscanf(ptr, "%d", &n);
    fscanf(ptr, "%d", &n2);
    fclose(ptr);

    printf("%d", n);
    printf("%d", n2);

    FILE *ptr2;
    ptr2 = fopen("axim.txt", "r");
    if (ptr2 == NULL)
    {
        printf("Nope");
    }

    return 0;
}