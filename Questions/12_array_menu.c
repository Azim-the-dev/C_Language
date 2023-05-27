/*
 * Write a Program to perform following actions on an array entered by the user:
 * a) Print the even-valued elements
 * b) Print the odd-valued elements
 * c) Calculate and print the sum and average of the elements of array
 * d) Print the maximum and minimum element of array
 * e) Remove the duplicates from the array
 * f) Print the array in reverse order
 * The program should present a menu to the user and ask for one of the options.
 * The menu should also include options to re-enter array and to quit the program.
 */

#include <stdio.h>

void menu(int arr[100], int size);
void even(int arr[100], int size);
void odd(int arr[100], int size);
void sum_avg(int arr[100], int size);
void max_min(int arr[100], int size);
void rem(int arr[100], int size);
void reverse(int arr[100], int size);

int main()
{
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    menu(arr, size);

    return 0;
}

void menu(int arr[100], int size)
{
    int choice;
    printf("\nMENU:\n");
    printf("1. Print the even-valued elements\n");
    printf("2. Print the odd-valued elements\n");
    printf("3. Print the sum and average of elements\n");
    printf("4. Print the maximum and minimum of elements\n");
    printf("5. Remove the duplicates from the array\n");
    printf("6. Print the array in reverse order\n");
    printf("7. Re-enter array\n");
    printf("8. Quit\n");

    printf("\nEnter your choice (1-8): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        even(arr, size);
        break;

    case 2:
        odd(arr, size);
        break;

    case 3:
        sum_avg(arr, size);
        break;

    case 4:
        max_min(arr, size);
        break;

    case 5:
        rem(arr, size);
        break;

    case 6:
        reverse(arr, size);
        break;

    case 7:
        main();
        break;

    case 8:
        printf("Exiting program...");
        break;

    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }
}
void even(int arr[100], int size)
{
    printf("\nPrinting the even-valued of elements...\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
void odd(int arr[100], int size)
{
    printf("\nPrinting the odd-valued of elements...\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
void sum_avg(int arr[100], int size)
{
    float sum = 0, avg = 0.0;
    printf("\nprinting the sum and average of the elements...\n");
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        avg += arr[i];
    }
    printf("The sum of the elements = %.2f\n", sum);
    printf("The average of the elements = %.2f\n", avg / size);
}
void max_min(int arr[100], int size)
{
    int max, min;
    printf("\nPrinting the maximum and minimum element...\n");
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) // IMP
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The maximum element = %d\n", max);
    printf("The minimum element = %d\n", min);
}
void rem(int arr[100], int size)
{
    int i, j = 0;
    printf("\nRemoveing the duplicates from the array...\n");
    for (i = 0; i < size; i++) 
	{
        if (i == 0 || arr[i] != arr[i-1]) 
		{
            arr[j++] = arr[i];
        }
    }
    size = j;
    for (i = 0; i < size; i++) 
	{ 
        printf("%d\t", arr[i]);
    }
}
void reverse(int arr[100], int size)
{
    printf("\nPrinteing the array in reverse order...\n");
    for (int i = (size - 1); i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}