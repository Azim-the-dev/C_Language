#include <stdio.h>

int main()
{
    int num;
    printf("Ener a number:");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        for (int z = 0; z <= i; z++)
        {
            printf(".");
        }
        
        printf("\n");
    }
    


    return 0;
}