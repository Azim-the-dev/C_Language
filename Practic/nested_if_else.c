#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The largest number is %d", num1);
        }
    }

    if (num2 > num1)
    {
        if (num2 > num3)
        {
            printf("The largest number is %d", num2);
        }
    }

    if (num3 > num1)
    {
        if (num3 > num2)
        {
            printf("The largest number is %d", num3);
        }
    }

    else
    {
        printf("ERROR!\nYou have entered wrong input or same numbers");
    }

    return 0;
}