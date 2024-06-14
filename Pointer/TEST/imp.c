#include <stdio.h>

void zero(int *give_me)
{
    *give_me = 0;
}

void zero2(int give_me)
{
    give_me = 0;
}

int main()
{
    int num = 10;

    printf("The value of num Befor: %d\n\n", num);

    zero2(num);//This is call by values so this will not work

    printf("The value of num function: %d\n\n", num);

    zero(&num);//This is call by reference so this will work

    printf("The value of num function: %d\n\n", num);


    return 0;
}

//For call by reference must use * and &