#include <stdio.h>

int main()
{
    int num1, num2;
    char op;

    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter operator eg ( + _ * / )\n");
    scanf(" %c", &op);

    printf("Enter the second number: \n");
    scanf("%d", &num2);

    switch (op)
    {
    case ('+'):
        printf("%d %c %d = %d", num1, op, num2, num1 + num2);
        break;

    case ('-'):
        printf("%d %c %d = %d", num1, op, num2, num1-num2);
        break;

    case ('*'):
        printf("%d %c %d = %d", num1, op, num2, num1 * num2);
        break;

    case ('/'):
        printf("%d %c %d = %d", num1, op, num2, num1 / num2);
        break;
    }
    return 0;
}