#include <stdio.h>
#include <conio.h>

int main()
{
    int num;

    printf("Enter how many eow of star you want: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    getch();

    return 0;
}