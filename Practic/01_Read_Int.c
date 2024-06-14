#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("01_Read_Int.txt","r");
    int num[3];

    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr, "%d", &num[i]);
    }

    printf("The three values are: %d %d %d\n",num[0],num[1],num[2]);
    
    fclose(ptr);
    return 0;
}