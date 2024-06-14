#include <stdio.h>

int sum(int a);
int main()
{
    int num;

    scanf("%d",&num);

    printf("The sum of %d is %d", num , sum(num));

    return 0;
}

int sum(int a)
{
    int b;
    if (a==0)
    {
        return 0;
    }
    else
    {
        return a + sum(a-1);
    }    
}