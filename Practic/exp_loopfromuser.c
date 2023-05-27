#include <stdio.h>

int main()
{
    int a, b, x;
    char c, z;
    x = 0;

    printf("Do you want to start this sum programm\n");
    printf("'Y' FOR YES ANT OTHER KEY FOR NO: ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        do
        {
            printf("Enter your first number: ");
            scanf("%d", &a);

            printf("Enter your second number: ");
            scanf("%d", &b);

            printf("The sum is: %d\n", a + b);

            printf("Do you wanna countinue\n");
            printf("'Y' FOR YES ANT OTHER KEY FOR NO: ");
            scanf("%c", &z);
            x++;
        }while (x < 11);
    
    }
    
    else
    {
        printf("Thanks!");
    }
    return 0;
}