#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    int num, guess, loop = 1;
    srand(time(0));
    num = rand() % 10;
    char name[10], yes[5], again[5];

    // printf("The random number is %d\n", num);

    printf("** WELCOME TO MY GAME **\n");
    printf("\n");
    printf("Enter your name: ");
    gets(name);
    printf("\t\t\t*Welcome %s*\n", name);
    printf("\n");
    printf("THIS IS A SIMPLE GAME WHERE YOU HAVE TO GUESS A NUMBER\n");
    printf("WHICH IS GUESSED BY 'PLAYER UNKNOWN'\n");
    printf("\n");

    printf("DO YOU WANT TO PLAY THIS GAME?\n");
    printf("TYPE 'YES' FOR CONTINUE:");
    gets(yes);
    printf("\n");

    if ((yes[0] == 'y' && yes[1] == 'e' && yes[2] == 's') || (yes[0] == 'Y' && yes[1] == 'E' && yes[2] == 'S'))
    {
        printf("Player Unknown:\n");
        printf("\t \tI have guessed a number\n");
        printf("\t \tHint: The number is between '0-10'\n");
        printf("\n");

        do
        {
            printf("Player %s:\n", name);
            printf("\t\tEnter your number:");
            scanf("%d", &guess);
            printf("\n");

            if (num != guess)
            {
                printf("Player Unknown:\n");
                printf("\t\tWrong number!!\n");
                printf("\n");
            }
            else
            {
                printf("YOU GUESSED IT IN %d ATTEMPTS\n", loop);
                switch (loop)
                {
                case 1:
                    printf("YOUR RANK IS 'A+'\n");
                    //printf("DO YOU WANT TO PLAY AGAIN?\n");
                    break;

                case 2:
                    printf("YOUR RANK IS 'A+'\n");
                    break;

                case 3:
                    printf("YOUR RANK IS 'A'\n");
                    break;

                case 4:
                    printf("YOUR RANK IS 'B'\n");
                    break;

                case 5:
                    printf("YOUR RANK IS 'B'\n");
                    break;

                case 6:
                    printf("YOUR RANK IS 'C'\n");
                    break;

                case 7:
                    printf("YOUR RANK IS 'C'\n");
                    break;

                default:
                    printf("YOUR RANK IS 'Chutiya'\n");
                    break;
                }
            }
            loop++;

        } while (guess != num);
    }

    else
    {
        printf("Thanks!");
    }

    return 0;
}