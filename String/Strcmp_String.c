#include <stdio.h>
#include<string.h>

int main()
{
    char st1[20] = "Hello";
    char st2[20] = "Azim";
    int value = strcmp(st1, st2);
    //strcmp()
    //This function is used to compare two strings.
    //If returns '0' then strings are equal.

    printf("Now the value is %d", value);

    return 0;
}