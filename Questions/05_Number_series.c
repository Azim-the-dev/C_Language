// Write a Program to compute the sum of the first n terms of the following series
// S = 1+1/2+1/3+1/4+...

#include <stdio.h>

int main()
{
    int num;
    float sum = 0.0;

    printf("Enter A Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum + 1.0 / i;
    }

    printf("Result = %f",sum);

    return 0;
}