// Write a Program to all arithmetic operation using switch case.

#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter operator eg ( + _ * / ): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (op)
    {
    case ('+'):
        printf("%d %c %d = %d", num1, op, num2, num1 + num2);
        break;

    case ('-'):
        printf("%d %c %d = %d", num1, op, num2, num1 - num2);
        break;

    case ('*'):
        printf("%d %c %d = %d", num1, op, num2, num1 * num2);
        break;

    case ('/'):
        printf("%d %c %d = %d", num1, op, num2, num1 / num2);
        break;
    default:
    printf("WRONG INPUT!");
    }

    return 0;
}