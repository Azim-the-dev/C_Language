#include <stdio.h>

int main()
{
    int rating;

    printf("Enter Your Rating (1-5): ");
    scanf("%d", &rating);

    switch (rating) // Switch statement allows to execute different code based on the value of a variable.
    {
    case 1:
        printf("So Bad");
        break;
    case 2:
        printf("Not Happy");
        break;
    case 3:
        printf("Avrage");
        break;
    case 4:
        printf("Good");
        break;
    case 5:
        printf("Supb");
        break;
    default:
        printf("Something went wrong!");
        break;
    }

    return 0;
}