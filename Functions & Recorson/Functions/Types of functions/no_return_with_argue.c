#include<stdio.h>

void call(int a);
int main()
{
    int x = 10;
    printf("Int is comming...\n\n");
    call(x);
    printf("Done...\n\n");

    return 0;
}

void call(int a)
{
    printf("%d\n\n",a);

}