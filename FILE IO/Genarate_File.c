#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("azim.txt","w");
    fclose(ptr);

    return 0;
}