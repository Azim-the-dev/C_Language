#include<stdio.h>

int main()
{
    char ha[5];

    gets(ha);

    printf("%s\n",ha);

    if (ha[0] == ('H') || ('h') && ha[1] == 'A')
    {
        printf("HA");
    }

    return 0;
}