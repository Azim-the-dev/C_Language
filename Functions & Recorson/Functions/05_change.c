#include<stdio.h>

int change(int a);
int main()
{
    int a,x;

    printf("Please Entera Number: \n");
    scanf("%d",&a);

    x = change(a);
    printf("%d\n",x);
    return 0;
}

int change(int a)
{
    int x;
    x = a + a;
    return x;
}