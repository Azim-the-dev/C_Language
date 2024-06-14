#include<stdio.h>
#include<string.h>

int my_strlen(char *ch);
int main()
{
    char name[20];
    int length;
    int length2;
    printf("Enter A String: ");
    gets(name);

    length = strlen(name);//This function is used to count the number of characters in the string excluding the null (\0) character.
    length2 = my_strlen(name);//This is my function. works like strlen.

    printf("The Length Of Your String '%s' is: %d\n", name, length);
    printf("The Length Of Your String '%s' is: %d\n", name, length2);
    return 0;
}

int my_strlen(char *ch)//Here is my length calculating function.
{
    int length = 0;
    while(*ch != '\0')
    {
    ch++;
    length++;
    }
    return length;
}