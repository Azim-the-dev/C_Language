#include <stdio.h>

int main()
{

    int a, b;
    printf("\nEnter the value of A: ");
    scanf("%d", &a);

    printf("\nEnter the value of B: ");
    scanf("%d", &b);

    printf("\nThe value of A is %d B is %d", a, b);

    int c = a;
    a = b;
    b = c;

    int Temp;

    printf("\nFOR NUMBER SWAP '1 FOR YES 0 FOR NO': ");
    scanf("%d", &Temp);

    if (Temp == 1)
    {
        printf("\nThe value of A is %d B is %d", a, b);
    }
    else
    {
        printf("Thanks!");
    }

    return 0;
}