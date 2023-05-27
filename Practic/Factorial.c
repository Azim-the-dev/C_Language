#include<stdio.h>

int fac(int a);
int main()
{
    int num;

    printf("Enter a Number:");
    scanf("%d",&num);

    printf("The Factorial of %d is %d",num, fac(num));

    return 0;
}
int fac(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a * fac(a-1);
    }
}