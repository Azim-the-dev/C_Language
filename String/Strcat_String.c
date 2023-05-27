#include <stdio.h>
#include<string.h>

int main()
{
    char st1[20] = "Hello";
    char st2[20] = "Azim";

    printf("Befor st1 = %s, st2 = %s\n\n",st1,st2);

    strcat(st1, st2);//This function is used to concatenates string 2 to string 1.

    printf("After st1 = %s, st2 = %s",st1,st2);

    return 0;
}