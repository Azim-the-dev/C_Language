#include<stdio.h>

int main()
{
    int a=1;
    int num;

    printf("Enter number for multiplication table: ");
    scanf("%d",&num);

    while (a<=10)
    {
        printf("%d x %d = %d\n",num,a,num*a);
        a++;
    }

    return 0;
}