#include<stdio.h>

int change(int a);
int main()
{
    int a,x;

    printf("Please Entera Number: ");
    scanf("%d",&a);

    x = change(a);
    printf("%d",x);
    return 0;
}

int change(int a)
{
    a = 19999;
    //return 0;
}