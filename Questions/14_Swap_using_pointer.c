// Write a program that swaps two numbers using pointers.

#include <stdio.h>

int main()
{
    int num1, num2, temp;
    int *a = &num1, *b = &num2;

    printf("Enter value for A and B:\n");
    scanf("%d %d", &num1, &num2);

    printf("Befor Swaping\nA = %d\nB = %d\n",num1,num2);

    temp = *a;
    *a = *b;
    *b = temp;

    printf("After Swaping\nA = %d\nB = %d\n",num1,num2);

    return 0;
}