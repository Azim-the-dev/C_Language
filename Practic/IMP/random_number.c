#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num;
    srand(time(0));
    num = rand()%100; //%100 Means randome number between 0-100

    printf("The number is %d",num);

    return 0;
}