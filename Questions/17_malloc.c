// Write a program to find sum and average of n elements entered by the user.
// To write this program, allocate memory dynamically using malloc( ) / calloc( ) functions.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *ptr, sum = 0;
    float avg;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int));

    printf("Enter %d elements: \n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }

    avg = sum / num;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    free(ptr); // Free dynamically allocated memory
    return 0;
}