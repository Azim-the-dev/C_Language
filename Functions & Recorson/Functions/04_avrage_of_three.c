#include <stdio.h>

float avrage(float a, float b, float c);
int main()
{
    int num, num1, num2;

    printf("Enter 3 number for avrage: ");
    scanf("%d",&num);
    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("The avrage is %f\n", avrage(num,num1,num2));

    printf("Done\n");

    return 0;
}

float avrage(float a, float b, float c)
{
    return (a+b+c)/3;
}