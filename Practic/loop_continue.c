#include<stdio.h>

int main()
{
int a,b;
a=5;
b=0;

while(b<10)
{
    b++;
    if(b!=a)
    {
        continue;
    }
    else{
        printf("N: %d\n",b);
    } 
}

    return 0;
}
