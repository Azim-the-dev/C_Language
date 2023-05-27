// Write a program in which a function is passed address of two variables and then alter its contents.

#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    int num1, num2;

    printf("Enter value for A and B:\n");
    scanf("%d %d", &num1, &num2);

    printf("Befor Swaping\nA = %d\nB = %d\n",num1,num2);

    swap(&num1,&num2);

    printf("After Swaping\nA = %d\nB = %d\n",num1,num2);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}