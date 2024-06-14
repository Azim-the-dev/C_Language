#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("azim2.txt","r");

    if (ptr == NULL)
    {
        printf("The filr does not exit!\n");
    }
    else
    {
        // Code
    }
    
    fclose(ptr);
    return 0;
}