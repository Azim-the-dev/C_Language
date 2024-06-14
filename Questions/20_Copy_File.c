// WAP to copy the content of one file to annother.

#include <stdio.h>

int main()
{
    FILE *ptr,*ptr2;
    ptr = fopen("azim.txt","r");
    ptr2 = fopen("azim2.txt","w");
    char c = fgetc(ptr);

    while(c != EOF)
    {
        fputc(c,ptr2);
        c = fgetc(ptr);
    }
    fclose(ptr);
    fclose(ptr2);

    printf("The file copied sucesfully!");
    return 0;
}