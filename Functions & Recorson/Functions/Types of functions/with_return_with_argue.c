#include<stdio.h>

int call(int a);
int main()
{
    int x, s=10;
    printf("Something is comming...\n\n");
    x = call(s);
    printf("%d\n\n",x);
    printf("Done...\n\n");

    return 0;
}

int call( int a)
{
    int b =10;
    return (a + b);
}