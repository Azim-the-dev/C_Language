#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("05_Int_File.txt","r");
    int num, num2;

    fscanf(ptr, "%d", &num);
    num2 = num * num;

    ptr = fopen("05_Int_File.txt","w");

    fprintf(ptr, "%d", num2);
    
    fclose(ptr);
    printf("The file updated!");
    return 0;
}