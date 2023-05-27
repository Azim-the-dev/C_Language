#include <stdio.h>

int main()
{
    int num = 77;
    FILE *ptr;
    ptr = fopen("generated.txt","w");

    fprintf(ptr, "The number is %d", num);

    fclose(ptr);

    return 0;
}