#include <stdio.h>

void swap(int *num1, int *num2);
int main()
{
    int num1 = 10, num2 = 20;

    printf("BEFOR SWAPING\nThe value of num1 = %d num2 = %d\n\n", num1, num2);

    int *temp1 = &num1;
    int *temp2 = &num2;
    int tempx;
    tempx = *temp1;
    *temp1 = *temp2;
    *temp2 = tempx;

    printf("AFTER SWAPING\nThe value of num1 = %d num2 = %d\n\n", num1, num2);

    swap(&num1, &num2);

    printf("AGAIN SWAPING USING FUNCTION\nThe value of num1 = %d num2 = %d\n\n", num1, num2);

    return 0;
}
void swap(int *num1, int *num2)
{
    int tempx;
    tempx = *num1;
    *num1 = *num2;
    *num2 = tempx;
}