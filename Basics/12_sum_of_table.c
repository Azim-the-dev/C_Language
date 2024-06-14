#include<stdio.h>

int main()
{
    int a=1;
    int num;
    int sum=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    while (a<=10)
    {
        sum +=(num*a);
        a++;
    }
    printf("The sum is: %d",sum);

    return 0;
}