#include <stdio.h>

int ret(int a);
int main()
{
    int a, b=10;

    a= ret(b);
    printf("%d",a);
    return 0;
}

int ret(int a)
{
    if (a=10)
    {
        return 1;
    }
    else
    {
        return a + 1;
    }
    
}