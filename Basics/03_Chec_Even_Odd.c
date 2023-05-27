#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The Number %d Is Even\n", num);
    }
    else
    {
        printf("The Number %d Is A Odd\n", num);
    }

    return 0;
}