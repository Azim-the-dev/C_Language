#include<stdio.h>

int main()
{
    int a=10;
    int num;

    printf("Enter number for reverse multiplication table: ");
    scanf("%d",&num);

    while(a>=1)
    {
        printf("%d x %d = %d\n",num,a,num*a);
        a--;
    }

    return 0;
}