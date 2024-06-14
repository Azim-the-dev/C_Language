//WAP A program to reverse a number.

#include <stdio.h>

int main()
{
    int num, temp, rev = 0;

    printf("Enter a number for reverse It: ");
    scanf("%d",&num);

    printf("Reverse: ");
    while(num != 0)
    {
        temp = num % 10;
        rev = rev *10+ temp;
        printf("%d",temp);
        num = num / 10;
    }

    printf("\nReverse2: %d",rev);

    return 0;
}