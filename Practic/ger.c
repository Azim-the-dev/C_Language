#include <stdio.h>

int main()
{
    int res;

    printf("\nEnter Your mark: ");
    scanf("%d", &res);

    switch (res)
    {
    case 1:
        printf("\nSo Bad");
        break;
    case 2:
        printf("\nNot Happy");
        break;
    case 3:
        printf("\nAvrage");
        break;
    case 4:
        printf("\nGood");
        break;
    case 5:
        printf("\nSupb");
        break;
    default:
        printf("\nInvalid!");
        break;
    }

    return 0;
}