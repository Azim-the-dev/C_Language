// Write a Program to find greatest among three numbers

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter Three Numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 > num2) && (num1 > num3))
    {
        printf("%d Is Greatest Among Three Number", num1);
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        printf("%d Is Greatest Among Three Number", num2);
    }
    else
    {
        printf("%d Is Greatest Among Three Number", num3);
    }

    return 0;
}