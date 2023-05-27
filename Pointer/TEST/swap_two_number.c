#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;

    printf("BEFOR SWAPING\nThe value of num1 = %d num2 = %d\n\n", num1, num2);

    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("AFTER SWAPING\nThe value of num1 = %d num2 = %d\n\n", num1, num2);

    return 0;
}