#include <stdio.h>

int main()
{
    int num;

start:
    printf("Hello World!\n");
    printf("Enter 1 for see 'Hello World!' again: ");
    scanf("%d", &num);

    if (num == 1)
    {
        goto start;
    }

    return 0;
}