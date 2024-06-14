#include <stdio.h>
#include<string.h>

int main()
{
    char st1[20];
    char st2[20] = "Azim";

    printf("Befor st1 = %s, st2 = %s\n\n",st1,st2);

    strcpy(st1, st2);//This function is used to copy the conten of second string into first string passed to it.

    printf("After st1 = %s, st2 = %s",st1,st2);

    return 0;
}