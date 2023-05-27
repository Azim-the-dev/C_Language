#include <stdio.h>

int azim(int num);
int main()
{
    int a = 10;
    printf("The avlue of a %d\n",a);
    azim(a);
    printf("The avlue of a %d",a);// not work due to call by values

    return 0;
}
int azim(int num)
{
    num *= 10;
}