// Write a Program to compute the sum of the first n terms of the following series
// S =1-2+3-4+5...

#include <stdio.h>

int main()
{
    int num, sum = 0, temp = 1;

    printf("Enter A Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += temp * i;
        temp = -temp;
    }

    printf("Result = %d",sum);

    return 0;
}