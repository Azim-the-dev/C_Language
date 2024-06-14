#include<stdio.h>

int main()
{
    int a,b,sum;
    a=1;
    sum=0;

    printf("Enter a number: ");
    scanf("%d",&b);

    printf("The sum of '");

    while (a<=b)
    {
        printf("%d, ",a);
        sum += a;
        a++;
    }
    printf("' is: %d",sum);
    
    return 0;
}