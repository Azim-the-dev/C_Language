#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, x = 1;
    srand(time(0));
    num = rand() % 100;

    //printf("The random number is %d\n", num);
    printf("THIS IS A SIMPLE GAME WHERE YOU HAVE TO GUESS THE NUMBER GENERETED BY COMPUTER\n");

    do
    {
        printf("Gess the number between 0-100: ");
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("Lower number please!\n");
        }
        else if (guess < num)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n", x);
        }
        x++;
    } while (guess != num);

    return 0;
}