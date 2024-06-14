#include<stdio.h>

int call();
int main()
{
    int x;
    printf("Something is comming...\n\n");
    x = call();
    printf("%d\n\n",x);
    printf("Done...\n\n");

    return 0;
}

int call()
{
    int a =10 , b = 2;
    return (a + b);
}