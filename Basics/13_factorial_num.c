#include<stdio.h>

int main()
{
    int num,yourn1,vac;
    vac =1;
    num=7;

    for(yourn1=1;yourn1<=num;yourn1++)
    {
        vac *= yourn1;
    }

    printf("%d",vac);

    return 0;
}