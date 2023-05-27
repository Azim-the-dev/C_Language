#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("azim3.txt","w");

    fputc('A', ptr);
    fputc('A', ptr);

    return 0;
}