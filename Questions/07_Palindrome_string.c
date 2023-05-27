// Write a function that checks whether a given string is Palindrome or not.
// Use this function to find whether the string entered by user is Palindrome or not.

#include <stdio.h>
#include <string.h>

void Palindrome(char str1[100]);
int main()
{
    char str1[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    Palindrome(str1);

    return 0;
}
void Palindrome(char str1[100])
{
    int result;
    char str2[100];
    strcpy(str2, str1); // For copy
    strrev(str1); // For reverse
    result = strcmp(str1, str2); // For compare

    if (result == 0)
    {
        printf("'%s' string is palindrome",str2);
    }
    else
    {
        printf("'%s' string is not palindrome",str2);
    }
}

// Whatt is palindrome string?
// A string is said to be palindrome if it remains the same on reading from both ends.