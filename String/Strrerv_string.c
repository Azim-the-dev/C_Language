#include <stdio.h>
#include<string.h>

int main()
{
    char st1[20] = "Azim";

    printf("Befor st1 = %s\n",st1);

    strrev(st1);// For reverse a string

    printf("After st1 = %s",st1);

    return 0;
}