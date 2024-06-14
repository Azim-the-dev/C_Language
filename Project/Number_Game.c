#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>
// #include <windows.h>

// void color(int color);
void wrong(char name[20]);
void easy(char name[20]);
void hard(char name[20]);
void again(char name[20]);
int main()
{
    char name[20], yes[5], mode[5];

    // color(10);
    printf("\t     * * * * * * * * * * * *\n");
    printf("\t     * WELCOME TO MY  GAME *\n");
    printf("\t     * * * * * * * * * * * *\n\n");

    printf("ENTER YOUR NAME: ");
    gets(name);

    printf("\t\t\tWELCOME %s\n\n", name);

    printf("'THIS IS A SIMPLE NUMBER GUESSING GAME'\n\n");

    printf("DO YOU WANT TO PLAY THIS GAME?\n");
    printf("ENTER 'YES' FOR CONTINUE: ");
    scanf(" %s", yes);
    printf("\n");

    if ((yes[0] == 'y' && yes[1] == 'e' && yes[2] == 's') || (yes[0] == 'Y' && yes[1] == 'E' && yes[2] == 'S'))
    {
        printf("CHOOSE A GAME MODE\n");
        printf("\t\t   'EASY OR HARD'\n");
        printf("ENTER: ");
        scanf(" %s", mode);
        printf("\n");

        if ((mode[0] == 'e' && mode[1] == 'a' && mode[2] == 's' && mode[3] == 'y') || (mode[0] == 'E' && mode[1] == 'A' && mode[2] == 'S' && mode[3] == 'Y'))
        {
            printf("GAME INSTRUCTIONS-\nGUESS THE NUMBER SELECTED BY THE COMPUTER\nTO WIN THE GAME\n\n");
            // getch();
            easy(name);
        }

        else if ((mode[0] == 'h' && mode[1] == 'a' && mode[2] == 'r' && mode[3] == 'd') || (mode[0] == 'H' && mode[1] == 'A' && mode[2] == 'R' && mode[3] == 'D'))
        {

            printf("GAME INSTRUCTIONS-\nGUESS THE NUMBER SELECTED BY THE COMPUTER\nTO WIN THE GAME\n\n");
            // getch();
            hard(name);
        }

        else
        {
            wrong(name);
        }
    }

    else
    {
        printf("THANKS!\n");
    }

    getch();

    return 0;
}

/*void color(int color) //Color function
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}*/

void wrong(char name[20]) // Function for wrong input
{
    char mode[5];

    printf("WRONG INPUT !!!\n");
    printf("\t\tENTER AGAIN: ");
    scanf(" %s", mode);
    printf("\n");

    if ((mode[0] == 'e' && mode[1] == 'a' && mode[2] == 's' && mode[3] == 'y') || (mode[0] == 'E' && mode[1] == 'A' && mode[2] == 'S' && mode[3] == 'Y'))
    {
        printf("GAME INSTRUCTIONS-\nGUESS THE NUMBER SELECTED BY THE COMPUTER\nTO WIN THE GAME\n\n");
        // getch();
        easy(name);
    }

    else if ((mode[0] == 'h' && mode[1] == 'a' && mode[2] == 'r' && mode[3] == 'd') || (mode[0] == 'H' && mode[1] == 'A' && mode[2] == 'R' && mode[3] == 'D'))
    {
        printf("GAME INSTRUCTIONS-\nGUESS THE NUMBER SELECTED BY THE COMPUTER\nTO WIN THE GAME\n\n");
        // getch();
        hard(name);
    }
    else
    {
        wrong(name);
    }
}

void easy(char name[20]) // Easy game mode function
{
    int num, guess, loop = 1;
    srand(time(0));
    num = rand() % 10; // Random number generator
    char yes[5];

    printf("-\n-\n-\n\n");

    // printf("\nHACK %d\n", num);
    printf("COMPUTER:\n");
    printf("\t\tGUESS A NUMBER BETWEEN '0-10'\n\n");

    do
    {

        printf("%s:\n", name);
        printf("\t\tENTER YOUR NUMBER: ");
        scanf("%d", &guess);
        printf("\n");

        if (num != guess)
        {
            printf("COMPUTER:\n");
            printf("\t\tWEONG!!\n\n");
        }
        else
        {
            printf("GAME OVER-\n");
            printf("YOU GUESSED IN %d ATTEMPTS\n", loop);
            switch (loop)
            {
            case 1:
            case 2:
                printf("YOUR RANK IS 'EPIC'\n\n");
                printf("COMPUTER: NYC PLAYED %s!\n\n", name);
                break;

            case 3:
            case 4:
                printf("YOUR RANK IS 'GOOD'\n\n");
                printf("COMPUTER: GOOD PLAYED %s!\n\n", name);
                break;
            case 5:
            case 6:
                printf("YOUR RANK IS 'BAD'\n\n");
                printf("COMPUTER: IT'S OK %s!\n\n", name);
                break;

            default:
                printf("YOUR RANK IS 'CHUTIYA'\n\n");
                printf("COMPUTER: CHUTIYA %s!\n\n", name);
                break;
            }
        }
        loop++;

    } while (guess != num);

    // getch();

    printf("%s DO YOU WANNA PLAY AGAIN?\n", name);
    printf("ENTER 'YES' FOR CONTINUE: ");
    scanf(" %s", yes);
    printf("\n");

    if ((yes[0] == 'y' && yes[1] == 'e' && yes[2] == 's') || (yes[0] == 'Y' && yes[1] == 'E' && yes[2] == 'S'))
    {
        again(name);
    }
    else
    {
        printf("\nTHANKS %s!\n\n\n", name);
        printf("ABOUT THIS GAME-\n");
        printf("\t\t CREATED BY: SK AZIM\n");
        printf("\t\t DATE 15/01/2023");
    }
}

void hard(char name[20]) // Hard game mode function
{
    int num, guess, loop = 1;
    srand(time(0));
    num = rand() % 100; // Random number generator
    char yes[5];

    printf("-\n-\n-\n\n");

    // printf("\nHACK %d\n", num);
    printf("COMPUTER:\n");
    printf("\t\tGUESS A NUMBER BETWEEN '0-100'\n\n");

    do
    {

        printf("%s:\n", name);
        printf("\t\tENTER YOUR NUMBER: ");
        scanf("%d", &guess);
        printf("\n");

        if (num < guess)
        {
            printf("COMPUTER:\n");
            printf("\t\tWEONG!!\n");
            printf("\t\tHINT: LOWER NUMBER\n\n");
        }
        else if (num > guess)
        {
            printf("COMPUTER:\n");
            printf("\t\tWEONG!!\n");
            printf("\t\tHINT: HIGHER NUMBER\n\n");
        }
        else
        {
            printf("GAME OVER-\n");
            printf("YOU GUESSED IN %d ATTEMPTS\n", loop);
            switch (loop)
            {
            case 1:
            case 2:
            case 3:
            case 4:
                printf("YOUR RANK IS 'EPIC'\n\n");
                printf("COMPUTER: NYC PLAYED %s!\n\n", name);
                break;

            case 5:
            case 6:
            case 7:
            case 8:
                printf("YOUR RANK IS 'GOOD'\n\n");
                printf("COMPUTER: GOOD PLAYED %s!\n\n", name);
                break;
            case 9:
            case 10:
            case 11:
            case 12:
                printf("YOUR RANK IS 'BAD'\n\n");
                printf("COMPUTER: IT'S OK %s!\n\n", name);
                break;

            default:
                printf("YOUR RANK IS 'CHUTIYA'\n\n");
                printf("COMPUTER: CHUTIYA %s!\n\n", name);
                break;
            }
        }
        loop++;

    } while (guess != num);

    // getch();

    printf("%s DO YOU WANNA PLAY AGAIN?\n", name);
    printf("ENTER 'YES' FOR CONTINUE: ");
    scanf(" %s", yes);
    printf("\n");

    if ((yes[0] == 'y' && yes[1] == 'e' && yes[2] == 's') || (yes[0] == 'Y' && yes[1] == 'E' && yes[2] == 'S'))
    {
        again(name);
    }
    else
    {
        printf("\nTHANKS %s!\n\n\n", name);
        printf("ABOUT THIS GAME-\n");
        printf("\t\t CREATED BY: SK AZIM\n");
        printf("\t\t DATE 15/01/2023\n");
    }
}

void again(char name[20]) // Function for play again
{
    char mode[5];

    printf("CHOOSE A GAME MODE\n");
    printf("\t\t   'EASY OR HARD'\n");
    printf("ENTER: ");
    scanf(" %s", mode);
    printf("\n");

    if ((mode[0] == 'e' && mode[1] == 'a' && mode[2] == 's' && mode[3] == 'y') || (mode[0] == 'E' && mode[1] == 'A' && mode[2] == 'S' && mode[3] == 'Y'))
    {
        easy(name);
    }

    else if ((mode[0] == 'h' && mode[1] == 'a' && mode[2] == 'r' && mode[3] == 'd') || (mode[0] == 'H' && mode[1] == 'A' && mode[2] == 'R' && mode[3] == 'D'))
    {
        hard(name);
    }
    else
    {
        wrong(name);
    }
}