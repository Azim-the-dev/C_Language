#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("03_Copy_File.txt","w");

    FILE *ptr2;
    ptr2 = fopen("02_Table_File.txt", "r");

    char c = fgetc(ptr2);

    while (c != EOF)
    {
        fputc(c, ptr);
        c = fgetc(ptr2);
    }
    fclose(ptr);
    fclose(ptr2);

    printf("File sucessfully copied");
    return 0;
}