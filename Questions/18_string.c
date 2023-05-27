/*
 * Write a menu driven program to perform following operations on strings:
 * a) Show address of each character in string
 * b) Concatenate two strings without using strcat function
 * c) Concatenate two strings using strcat function
 * d) Compare two strings
 * e) Calculate length of the string (use pointers)
 * f) Convert all lowercase characters to uppercase
 * g) Convert all uppercase characters to lowercase
 * h) Calculate number of vowels
 * i) Reverse the string
 */

#include <stdio.h>
#include <string.h>

void adress(char str1[100], char str2[100]);
void con1(char str1[100], char str2[100]);
void con2(char str1[100], char str2[100]);
void compare(char str1[100], char str2[100]);
void length(char *ch, char *ch2);
void convert1(char str1[100]);
void convert2(char str1[100]);
void vowels(char str1[100]);
void reverse(char str1[100]);

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);

    printf("\nMENU:\n");
    printf("1. Show address of each character in string\n");
    printf("2. Concatenate two strings without using strcat function\n");
    printf("3. Concatenate two strings using strcat function\n");
    printf("4. Compare two strings\n");
    printf("5. Calculate length of the string (use pointers)\n");
    printf("6. Convert all lowercase characters to uppercase\n");
    printf("7. Convert all uppercase characters to lowercase\n");
    printf("8. Calculate number of vowels\n");
    printf("9. Reverse the first string\n");
    printf("10. Quit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        adress(str1, str2);
        break;
    case 2:
        con1(str1, str2);
        break;
    case 3:
        con2(str1, str2);
        break;
    case 4:
        compare(str1, str2);
        break;
    case 5:
        length(str1, str2);
        break;
    case 6:
        convert1(str1);
        break;
    case 7:
        convert2(str1);
        break;
    case 8:
        vowels(str1);
        break;
    case 9:
        reverse(str1);
        break;
    case 10:
        printf("Exiting program...");
        break;

    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }

    return 0;
}
void adress(char str1[100], char str2[100])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        printf("The adress of '%c' is: ", str1[i]);
        printf("%u\n", &str1[i]);
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        printf("The adress of '%c' is: ", str2[i]);
        printf("%u\n", &str2[i]);
    }
}
void con1(char str1[100], char str2[100])
{
    int i, z;
    for (i = 0; str1[i] != '\0'; i++)
    {
        // do nothing, Just find the end of str1
    }
    for (z = 0; str2[z] != '\0'; z++)
    {
        str1[i + z] = str2[z];
    }
    str1[i + z] = '\0';
    printf("Concatenate two strings without using strcat: %s", str1);
}
void con2(char str1[100], char str2[100])
{
    strcat(str1, str2);
    printf("Concatenate two strings using strcat: %s", str1);
}
void compare(char str1[100], char str2[100])
{
    int value = strcmp(str1, str2);

    printf("The value is %d", value); // If returns '0' then strings are equal.
}
void length(char *ch, char *ch2)
{
    int length = 0, length2 = 0;
    while (*ch != '\0')
    {
        ch++;
        length++;
    }
    printf("The length of 'String1' is: %d\n", length);

    while (*ch2 != '\0')
    {
        ch2++;
        length2++;
    }
    printf("The length of 'String2' is: %d\n", length2);
}
void convert1(char str1[100])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = str1[i] - 32;
    }
    printf("After converte lowercase to uppercase: %s", str1);
}
void convert2(char str1[100])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str1[i] = str1[i] + 32;
    }
    printf("After converte uppercase to lowercase: %s", str1);
}
void vowels(char str1[100])
{
    int count = 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
        {
            count++;
        }
    }

    printf("Number of vowels in the string: %d", count);
}
void reverse(char str1[100])
{
    printf("After reverse: %s", strrev(str1));
}