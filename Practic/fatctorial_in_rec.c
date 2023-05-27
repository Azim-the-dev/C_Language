#include <stdio.h>

int factorial(int n);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d: %d", num, factorial(num));
    return 0;
}

int factorial(int n)
{
    printf("Calling factorial (%d)\n",n);
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
