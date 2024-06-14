// Write a Program to print the sum and product of digits of an integer.

#include <stdio.h>

int main()
{
    int num, sum = 0, product = 1, temp;

    printf("Enter A Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        temp = num % 10; // '%' This is modulo operstor. For example: 123 % 10 is 3.
        sum = sum + temp;
        product = product * temp;

        num = num / 10;
    }

    printf("The Sum is %d\n", sum);
    printf("The Product is %d\n", product);

    return 0;
}