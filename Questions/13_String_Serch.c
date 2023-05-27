// Write a Program that prints a table indicating the number of occurrences of each alphabet
// In the text entered as command line arguments

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],c;
    int count = 0;

    printf("Enter a string : ");
    gets(str);
    
    printf("Enter character to be searched: ");
    scanf("%c",&c);

    for(int i=0; str[i] != '\0' ; i++)
    {
        if(str[i]==c)
        {
            count++;
        }
    }

    printf("\nCharacter '%c' occurs %d times \n ",c,count);

    return 0;
}